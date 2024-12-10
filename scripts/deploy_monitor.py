#!/usr/bin/env python3

# 
# Copyright 2024 Chair of EDA, Technical University of Munich
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#       http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# 

import argparse
import pathlib
import shutil
import string

from templates import TEMPLATE_CMAKELIST_VARIANT
from templates import TEMPLATE_CMAKELIST_ALL_VARIANTS
from templates import TEMPLATE_FACTORY_MONITOR_HEADER
from templates import TEMPLATE_FACTORY_MONITOR_SOURCE


####################################################### SUPPORT FUNCTIONS #######################################################

def deploy(lib_, variantName_, files_):

    isNewVariant = False
    
    # Check if targetDir exists (otherwise generate)
    targetDir = getVariantDir(lib_, variantName_)
    targetDir_include = targetDir / "include"
    targetDir_src = targetDir / "src"
    if not targetDir.is_dir():
        isNewVariant = True
        targetDir_include.mkdir(parents=True)
        targetDir_src.mkdir(parents=True)

    # Copy files to targetDir
    for file_i in files_:
        print(" > Copy: " + file_i.name, end='')

        # Check if file exists
        if not file_i.is_file():
            print(" [ERROR: File does not exist. Aborting copy]")
            continue

        # Check file suffix
        target = None
        if file_i.suffix == ".h":
            target = targetDir_include
        elif file_i.suffix == ".cpp":
            target = targetDir_src
                
        if target is None:
            print(" [ERROR: Unknown file-suffix. Aborting copy]")
            continue

        # Copy
        print(" to " + str(target) + "....", end='')
        shutil.copyfile(file_i, (target / file_i.name))
        print("Done.")

    # Update CMakeLists file of copied variant
    updateCMakeList_variant(lib_, variantName_)

    # Update CMakeLists (list of all variants) and library factories if variant is new
    if isNewVariant:
        updateCMakeList_allVariants(lib_)
        updateFactory_monitor_header(lib_)
        updateFactory_monitor_source(lib_)
        
def updateCMakeList_variant(lib_, variantName_):

    targetDir = getVariantDir(lib_, variantName_)
    cMakeFile = targetDir / "CMakeLists.txt"
    
    # Generate string substitutes
    libName = "SWEVAL_" + lib_.name.upper() + "_LIB"

    srcFileEntries = ""
    for file_i in (targetDir / "src").iterdir():
        if file_i.is_file() and file_i.suffix == ".cpp":
            srcFileEntries += "\tsrc/" + file_i.name + "\n"

    # Substitute template and update cMakeFile
    template = string.Template(TEMPLATE_CMAKELIST_VARIANT)
    output = template.substitute(libName=libName, files=srcFileEntries)
    updateFile(cMakeFile, output)
    

def updateCMakeList_allVariants(lib_):

    targetDir = getAllVariantsDir(lib_)
    cMakeFile = targetDir / "CMakeLists.txt"

    # Generate string substitutes
    variantDirEntries = ""
    for dir_i in targetDir.iterdir():
        if dir_i.is_dir():
            variantDirEntries += "ADD_SUBDIRECTORY(" + dir_i.name + ")\n"

    # Substitue template and update cMakeFile
    template = string.Template(TEMPLATE_CMAKELIST_ALL_VARIANTS)
    output = template.substitute(subdirs=variantDirEntries)
    updateFile(cMakeFile, output)

def updateFactory_monitor_header(lib_):

    headerFile = lib_ / "include" / "monitors" / "Factory.h"

    # Generate substitutes
    variantEnums = ""
    isFirst = True
    for var_i in getAllVariantNames(lib_):
        if isFirst:
            isFirst = False
        else:
            variantEnums += ",\n"
        variantEnums += "\t" + var_i
    
    # Substitute template and overwrite header file
    template = string.Template(TEMPLATE_FACTORY_MONITOR_HEADER)
    output = template.substitute(variantEnums=variantEnums)
    updateFile(headerFile, output)

def updateFactory_monitor_source(lib_):

    srcFile = lib_ / "src" / "Factory.cpp"

    # Generate string substitures

    # Include all header files
    includeHeaders = ""
    for var_i in getListOfVariantDirs(lib_):
        for header_i in (var_i / "include").iterdir():
            if header_i.is_file():
                includeHeaders += "#include \"" + header_i.name + "\"\n"
    
    # All variants have a handle and a monitor
    handles = ""
    monitors = ""
    for var_i in getAllVariantNames(lib_):
        handles += "\tif(varName_ == \"" + var_i + "\"){ return " + var_i + "; }\n"
        monitors += "\tcase " + var_i + ": return new " + var_i + "_Monitor();\n"
        
    # Substitute template and overwrite header file
    template = string.Template(TEMPLATE_FACTORY_MONITOR_SOURCE)
    output = template.substitute(includeHeaders=includeHeaders,
                                 handles=handles,
                                 monitors=monitors
    )
    updateFile(srcFile, output)

def updateFile(file_, output_):

    if file_.is_file():
        print(" > Overwriting ", end='')
    else:
        print(" > Generating ", end='')
    print(file_)
    with file_.open("w") as f:
        f.write(output_)
        
def getVariantDir(lib_, variantName_):
    return getAllVariantsDir(lib_) / variantName_

def getAllVariantsDir(lib_):
    return lib_ / "variants"

def getListOfVariantDirs(lib_):
    dirList = []
    for dir_i in getAllVariantsDir(lib_).iterdir():
        if dir_i.is_dir():
            dirList.append(dir_i)
    return dirList

def getAllVariantNames(lib_):
    names = []
    for dir_i in getAllVariantsDir(lib_).iterdir():
        if dir_i.is_dir():
            names.append(dir_i.name)
    return names

####################################################### MAIN SCRIPT #######################################################

# Parse input arguments
argParser = argparse.ArgumentParser()
argParser.add_argument("varName", metavar="v", type=str, help="Name of the variant to be deployed")
argParser.add_argument("files", metavar="f", type=str, nargs="+", help="List of files to be deployed (pathes to files)")
args = argParser.parse_args()

# Specify path to backend library
monitorLib = pathlib.Path(__file__).parents[1] / "libs" / "monitors"

# Convert file pathes (string -> pathlib.Path)
files = [pathlib.Path(f).resolve() for f in args.files]

# Call common deploy function
print()
print("Deploying monitor...")
deploy(monitorLib, args.varName, files)
print()

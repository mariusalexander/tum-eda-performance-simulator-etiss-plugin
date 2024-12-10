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
import subprocess

# Parse input arguments
argParser = argparse.ArgumentParser()
argParser.add_argument("varName", metavar="v", type=str, help="Name of the variant to be deployed")
argParser.add_argument("files", metavar="f", type=str, nargs="+", help="List of files to be deployed (pathes to files)")
args = argParser.parse_args()

# Specify path to backend library
deploy_backend = str(pathlib.Path(__file__).parents[1] / "libs" / "backends" / "scripts" / "deploy_backend.py")
run_deploy_backend = [deploy_backend, args.varName]
run_deploy_backend.extend([f for f in args.files])

# Call deployment script of backend submodule
print()
print("Deploying backend...")
subprocess.run(run_deploy_backend, check=True)
print()

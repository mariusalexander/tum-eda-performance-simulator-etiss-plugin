# SoftwareEvalLib

This library contains the following plugins for the ETISS simulator:

- **PerformanceEstimatorPlugin:** A plugin to report the estimated performance of the target software
- **TracePrinterPlugin:** A plugin to generate a trace of the executed instructions of the target software

## Setup

To add this library to ETISS, make sure to include it into the "PluginImpl" directory of ETISS. Remeber to (re-)compile ETISS.

## Usage

### PerformanceEstimatorPlugin

To run ETISS with the PerformanceEstimatorPlugin, provide ETISS with an .ini-file containing the following:

```ini
[Plugin PerformanceEstimatorPlugin]
plugin.perfEst.uArch=<MICROARCHITECTURE_NAME> ; Required! Replace with desired microarchitecture
plugin.perfEst.print=1 ; Optional. Will generate a timing trace. Slows down simulation!
plugin.perfEst.printDir=<DIR_NAME> ; Optional. Specify directory for generated timing traces
```

To check if a microarchitecture variant is supported, you can navigate to "./libs/backends/variants". Check if a directory with the name of the microarchitecture exists. If it does, make sure that it contains a file `<MICROARCHITECTURE_NAME>_PerformanceModel.cpp`.

### TracePrinterPlugin

To run ETISS with the TracePrinterPlugin, provide ETISS with an .ini-file containing the following:

```ini
[Plugin TracePrinterPlugin]
plugin.tracePrinter.trace=<TRACE_FORMAT_NAME> ; Required! Replace with desired trace format
plugin.tracePrinter.stream.toFile=1 ; Required! Select 0 if trace shall be dumped to cout instead of a file
plugin.tracePrinter.stream.outDir=<DIR_NAME> ; Required, if stream to file
plugin.tracePrinter.stream.fileName=<FILE_NAME> ; Optional.
plugin.tracePrinter.stream.rotateSize=0x100000 ; Optional.
```

To check if a trace format variant is supported, you can navigate to "./libs/backends/variants". Check if a directory with the name of the trace format exists. If it does, make sure that it contains a file `<TRACE_FORMAT_NAME>_Printer.cpp`.

## Update

The code generator tools M2ISAR and [M2ISAR-Perf](https://github.com/tum-ei-eda/M2-ISA-R-Perf) can be used to add / update microarchitecture and trace format variants.

To automatically deploy generated code for the monitors, you can call:

   $ ./scripts/deploy_monitor.py <VARIANT_NAME> file1,file2,...,fileN

To automatically deploy generated code for the backends (i.e. channel, performance estimator and printer), you can call:

   $ ./scripts/deploy_backend.py <VARIANT_NAME> file1,file2,...,fileN

Note:

- Supported suffixes for files are ".cpp" (src) and ".h" (header)
- The script will update "CMakeLists" files
- If files allready exist, they will be over-written.
- If variant was not present before, the script will add the new variant to "Factory.cpp" and "Factory.h" files, by over-writing them.

## Version

This is version v1.0

It is compatible with the following submodule versions:

| Submodule | Version |
| --------- | ------- |
| SoftwareEval-Backends | v1.0 |
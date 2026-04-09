# Ghidra headless script to decompile all functions in an imported program
# Usage: analyzeHeadless <project_dir> <project_name> -import <file> -postScript ghidra_decompile.py <output_file>
# @category Decompilation
# @runtime Jython

import os
import sys
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor

args = getScriptArgs()
if len(args) < 1:
    output_path = "/tmp/ghidra_decompiled.c"
else:
    output_path = args[0]

monitor = ConsoleTaskMonitor()
decomp = DecompInterface()
options = DecompileOptions()
decomp.setOptions(options)
decomp.openProgram(currentProgram)

fm = currentProgram.getFunctionManager()
funcs = fm.getFunctions(True)

with open(output_path, "w") as f:
    f.write("// Decompiled from: {}\n".format(currentProgram.getName()))
    f.write("// Ghidra version: {}\n\n".format(getGhidraVersion()))

    count = 0
    for func in funcs:
        if monitor.isCancelled():
            break
        results = decomp.decompileFunction(func, 60, monitor)
        if results and results.decompileCompleted():
            code = results.getDecompiledFunction()
            if code:
                sig = code.getSignature()
                body = code.getC()
                f.write("// Function: {} @ 0x{}\n".format(func.getName(), func.getEntryPoint()))
                f.write(body)
                f.write("\n\n")
                count += 1

    f.write("\n// Total functions decompiled: {}\n".format(count))

print("Decompiled {} functions to {}".format(count, output_path))

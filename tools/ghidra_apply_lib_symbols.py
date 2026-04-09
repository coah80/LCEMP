# Apply symbols from .lib files to the game executable using Ghidra's FunctionID or
# byte pattern matching. This script imports .lib COFF objects and creates function signatures.
# @category Decompilation
# @runtime Jython

import os
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.program.model.symbol import SourceType

args = getScriptArgs()
output_dir = args[0] if len(args) > 0 else "/tmp/ghidra_4j_output"

if not os.path.exists(output_dir):
    os.makedirs(output_dir)

monitor = ConsoleTaskMonitor()

# Get symbol table
st = currentProgram.getSymbolTable()
fm = currentProgram.getFunctionManager()
memory = currentProgram.getMemory()

# Search for RTTI type descriptor names in memory to find class vtables
# MSVC RTTI: type_info::name starts with ".?AV" followed by class name
listing = currentProgram.getListing()

print("Searching for RTTI type descriptors to identify classes...")
rtti_classes = {}
data_iter = listing.getDefinedData(True)
while data_iter.hasNext() and not monitor.isCancelled():
    d = data_iter.next()
    if d.hasStringValue():
        val = d.getValue()
        if val and isinstance(val, (str, unicode)) and val.startswith(".?AV"):
            classname = val[4:].split("@@")[0]
            rtti_classes[classname] = d.getAddress()

print("Found {} RTTI classes".format(len(rtti_classes)))

# Look for known 4J classes
target_classes = [
    "C_4JInput", "CInput", "CForceFeedback",
    "C4JStorage", "CSaveGame", "CDLC", "CStorage",
    "C_4JProfile", "CProfile", "CAwardManager", "CRichPresence", "CSys", "CProfileData",
    "UIController", "ConsoleUIController", "UIScene",
]

found_classes = {}
for cls in target_classes:
    if cls in rtti_classes:
        found_classes[cls] = rtti_classes[cls]
        print("  Found RTTI for: {} @ {}".format(cls, rtti_classes[cls]))

# Now set up decompiler for the functions we find
decomp = DecompInterface()
options = DecompileOptions()
options.setMaxPayloadMBytes(120)
decomp.setOptions(options)
decomp.openProgram(currentProgram)

# For each RTTI class found, trace the vtable to find virtual functions
# RTTI Complete Object Locator -> vtable -> virtual function addresses
refMgr = currentProgram.getReferenceManager()

vtable_funcs = {}
for cls, rtti_addr in found_classes.items():
    refs = refMgr.getReferencesTo(rtti_addr)
    for ref in refs:
        # The reference to type_info name is from the TypeDescriptor
        # TypeDescriptor is referenced by CompleteObjectLocator
        # CompleteObjectLocator is at vtable[-1]
        td_refs = refMgr.getReferencesTo(ref.getFromAddress())
        for td_ref in td_refs:
            col_addr = td_ref.getFromAddress()
            col_refs = refMgr.getReferencesTo(col_addr)
            for col_ref in col_refs:
                vt_minus1 = col_ref.getFromAddress()
                # vtable starts at next pointer
                vt_start = vt_minus1.add(8)  # 64-bit pointers
                
                # Read vtable entries
                funcs_found = []
                offset = 0
                while offset < 200 * 8:  # Max 200 virtual functions
                    try:
                        ptr_bytes = bytearray(8)
                        memory.getBytes(vt_start.add(offset), ptr_bytes)
                        ptr_val = 0
                        for i in range(8):
                            ptr_val |= (ptr_bytes[i] & 0xFF) << (i * 8)
                        
                        if ptr_val == 0:
                            break
                        
                        func_addr = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(ptr_val)
                        func = fm.getFunctionAt(func_addr)
                        if func:
                            funcs_found.append(func)
                        else:
                            break
                    except:
                        break
                    offset += 8
                
                if funcs_found:
                    vtable_funcs[cls] = funcs_found
                    print("  {} vtable: {} virtual functions".format(cls, len(funcs_found)))

# Decompile all vtable functions
all_decompiled = {}
for cls, funcs in vtable_funcs.items():
    all_decompiled[cls] = []
    for func in funcs:
        result = decomp.decompileFunction(func, 120, monitor)
        if result and result.decompileCompleted():
            code = result.getDecompiledFunction()
            if code:
                all_decompiled[cls].append({
                    "name": func.getName(),
                    "addr": str(func.getEntryPoint()),
                    "code": code.getC()
                })

# Write per-class output files
for cls, funcs_data in all_decompiled.items():
    if funcs_data:
        out_path = os.path.join(output_dir, "{}_vtable_decompiled.c".format(cls))
        with open(out_path, "w") as f:
            f.write("// {} vtable functions decompiled from {}\n".format(cls, currentProgram.getName()))
            f.write("// Total: {} functions\n\n".format(len(funcs_data)))
            for fn in funcs_data:
                f.write("// ===== {} @ 0x{} =====\n".format(fn["name"], fn["addr"]))
                f.write(fn["code"])
                f.write("\n\n")
        print("Wrote {} {} vtable functions to {}".format(len(funcs_data), cls, out_path))

# Summary
total = sum(len(v) for v in all_decompiled.values())
print("\nTotal: {} classes with RTTI, {} vtable functions decompiled".format(
    len(found_classes), total))

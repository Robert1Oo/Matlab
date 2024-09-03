function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Subsystem.c:33c38"]=1;
    this.traceFlag["Subsystem.c:33c48"]=1;
    this.traceFlag["Subsystem.c:33c57"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Subsystem.c:33"]=1;
    this.lineTraceFlag["analog_input.c:37"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();

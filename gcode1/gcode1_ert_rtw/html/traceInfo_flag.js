function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["gcode1.c:35"]=1;
    this.lineTraceFlag["lamp_func.c:28"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();

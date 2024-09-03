function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["dir_lmap.c:40c5"]=1;
    this.traceFlag["dir_lmap.c:40c28"]=1;
    this.traceFlag["directional_light_func.c:27c19"]=1;
    this.traceFlag["directional_light_func.c:42c29"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["dir_lmap.c:39"]=1;
    this.lineTraceFlag["dir_lmap.c:40"]=1;
    this.lineTraceFlag["directional_light_func.c:27"]=1;
    this.lineTraceFlag["directional_light_func.c:34"]=1;
    this.lineTraceFlag["directional_light_func.c:39"]=1;
    this.lineTraceFlag["directional_light_func.c:42"]=1;
    this.lineTraceFlag["directional_light_func.c:49"]=1;
    this.lineTraceFlag["directional_light_func.c:54"]=1;
    this.lineTraceFlag["directional_light_func.c:64"]=1;
    this.lineTraceFlag["directional_light_func.c:69"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();

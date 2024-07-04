function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["driver.c:23"]=1;
    this.lineTraceFlag["driver.c:26"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();

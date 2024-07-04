function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["driver.c:47"]=1;
    this.lineTraceFlag["driver.c:52"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();

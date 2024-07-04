function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "driver"};
	this.sidHashMap["driver"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/input1"] = {sid: "driver:1"};
	this.sidHashMap["driver:1"] = {rtwname: "<Root>/input1"};
	this.rtwnameHashMap["<Root>/input2"] = {sid: "driver:2"};
	this.sidHashMap["driver:2"] = {rtwname: "<Root>/input2"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "driver:3"};
	this.sidHashMap["driver:3"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "driver:4"};
	this.sidHashMap["driver:4"] = {rtwname: "<Root>/Out2"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();

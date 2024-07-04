function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "add"};
	this.sidHashMap["add"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/input1"] = {sid: "add:2"};
	this.sidHashMap["add:2"] = {rtwname: "<Root>/input1"};
	this.rtwnameHashMap["<Root>/input2"] = {sid: "add:3"};
	this.sidHashMap["add:3"] = {rtwname: "<Root>/input2"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "add:1"};
	this.sidHashMap["add:1"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/output"] = {sid: "add:4"};
	this.sidHashMap["add:4"] = {rtwname: "<Root>/output"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();

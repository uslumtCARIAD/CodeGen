function CodeDefine() { 
this.def = new Array();
this.def["Runnable_Step"] = {file: "add_c.html",line:20,type:"fcn"};
this.def["Runnable_Init"] = {file: "add_c.html",line:32,type:"fcn"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:86,type:"type"};
this.def["boolean"] = {file: "Platform_Types_h.html",line:17,type:"type"};
this.def["sint16"] = {file: "Platform_Types_h.html",line:18,type:"type"};
this.def["sint32"] = {file: "Platform_Types_h.html",line:19,type:"type"};
this.def["sint8"] = {file: "Platform_Types_h.html",line:20,type:"type"};
this.def["uint16"] = {file: "Platform_Types_h.html",line:21,type:"type"};
this.def["uint32"] = {file: "Platform_Types_h.html",line:22,type:"type"};
this.def["uint8"] = {file: "Platform_Types_h.html",line:23,type:"type"};
this.def["float32"] = {file: "Platform_Types_h.html",line:24,type:"type"};
this.def["float64"] = {file: "Platform_Types_h.html",line:25,type:"type"};
this.def["Double"] = {file: "Rte_Type_h.html",line:31,type:"type"};
this.def["Rte_Instance"] = {file: "Rte_Type_h.html",line:32,type:"type"};
this.def["Std_ReturnType"] = {file: "Std_Types_h.html",line:17,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["add_c.html"] = "../add.c";
	this.html2Root["add_c.html"] = "add_c.html";
	this.html2SrcPath["add_h.html"] = "../add.h";
	this.html2Root["add_h.html"] = "add_h.html";
	this.html2SrcPath["add_private_h.html"] = "../add_private.h";
	this.html2Root["add_private_h.html"] = "add_private_h.html";
	this.html2SrcPath["add_types_h.html"] = "../add_types.h";
	this.html2Root["add_types_h.html"] = "add_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.html2SrcPath["add_component_arxml.html"] = "../add_component.arxml";
	this.html2Root["add_component_arxml.html"] = "add_component_arxml.html";
	this.html2SrcPath["add_datatype_arxml.html"] = "../add_datatype.arxml";
	this.html2Root["add_datatype_arxml.html"] = "add_datatype_arxml.html";
	this.html2SrcPath["add_implementation_arxml.html"] = "../add_implementation.arxml";
	this.html2Root["add_implementation_arxml.html"] = "add_implementation_arxml.html";
	this.html2SrcPath["add_interface_arxml.html"] = "../add_interface.arxml";
	this.html2Root["add_interface_arxml.html"] = "add_interface_arxml.html";
	this.html2SrcPath["Compiler_h.html"] = "../stub/Compiler.h";
	this.html2Root["Compiler_h.html"] = "Compiler_h.html";
	this.html2SrcPath["Platform_Types_h.html"] = "../stub/Platform_Types.h";
	this.html2Root["Platform_Types_h.html"] = "Platform_Types_h.html";
	this.html2SrcPath["Rte_Type_h.html"] = "../stub/Rte_Type.h";
	this.html2Root["Rte_Type_h.html"] = "Rte_Type_h.html";
	this.html2SrcPath["Rte_add_h.html"] = "../stub/Rte_add.h";
	this.html2Root["Rte_add_h.html"] = "Rte_add_h.html";
	this.html2SrcPath["Std_Types_h.html"] = "../stub/Std_Types.h";
	this.html2Root["Std_Types_h.html"] = "Std_Types_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"add_c.html","add_h.html","add_private_h.html","add_types_h.html","rtwtypes_h.html","add_component_arxml.html","add_datatype_arxml.html","add_implementation_arxml.html","add_interface_arxml.html","Compiler_h.html","Platform_Types_h.html","Rte_Type_h.html","Rte_add_h.html","Std_Types_h.html"];

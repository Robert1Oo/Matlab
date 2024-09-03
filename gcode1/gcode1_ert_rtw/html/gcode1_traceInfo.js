function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "gcode1"};
	this.sidHashMap["gcode1"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "gcode1:1"};
	this.sidHashMap["gcode1:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/sw"] = {sid: "gcode1:4"};
	this.sidHashMap["gcode1:4"] = {rtwname: "<Root>/sw"};
	this.rtwnameHashMap["<Root>/  lamp_func "] = {sid: "gcode1:1"};
	this.sidHashMap["gcode1:1"] = {rtwname: "<Root>/  lamp_func "};
	this.rtwnameHashMap["<Root>/lamp"] = {sid: "gcode1:5"};
	this.sidHashMap["gcode1:5"] = {rtwname: "<Root>/lamp"};
	this.rtwnameHashMap["<S1>/sw"] = {sid: "gcode1:2"};
	this.sidHashMap["gcode1:2"] = {rtwname: "<S1>/sw"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "gcode1:8"};
	this.sidHashMap["gcode1:8"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/Constant1"] = {sid: "gcode1:9"};
	this.sidHashMap["gcode1:9"] = {rtwname: "<S1>/Constant1"};
	this.rtwnameHashMap["<S1>/Switch"] = {sid: "gcode1:7"};
	this.sidHashMap["gcode1:7"] = {rtwname: "<S1>/Switch"};
	this.rtwnameHashMap["<S1>/lamp"] = {sid: "gcode1:3"};
	this.sidHashMap["gcode1:3"] = {rtwname: "<S1>/lamp"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();

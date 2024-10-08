function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "analog_input"};
	this.sidHashMap["analog_input"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "analog_input:1"};
	this.sidHashMap["analog_input:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/analog_inp"] = {sid: "analog_input:4"};
	this.sidHashMap["analog_input:4"] = {rtwname: "<Root>/analog_inp"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "analog_input:1"};
	this.sidHashMap["analog_input:1"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/lamp"] = {sid: "analog_input:6"};
	this.sidHashMap["analog_input:6"] = {rtwname: "<Root>/lamp"};
	this.rtwnameHashMap["<S1>/potentiometer"] = {sid: "analog_input:5"};
	this.sidHashMap["analog_input:5"] = {rtwname: "<S1>/potentiometer"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "analog_input:7"};
	this.sidHashMap["analog_input:7"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/Constant1"] = {sid: "analog_input:13"};
	this.sidHashMap["analog_input:13"] = {rtwname: "<S1>/Constant1"};
	this.rtwnameHashMap["<S1>/Constant2"] = {sid: "analog_input:14"};
	this.sidHashMap["analog_input:14"] = {rtwname: "<S1>/Constant2"};
	this.rtwnameHashMap["<S1>/Data Type Conversion"] = {sid: "analog_input:8"};
	this.sidHashMap["analog_input:8"] = {rtwname: "<S1>/Data Type Conversion"};
	this.rtwnameHashMap["<S1>/Divide"] = {sid: "analog_input:10"};
	this.sidHashMap["analog_input:10"] = {rtwname: "<S1>/Divide"};
	this.rtwnameHashMap["<S1>/GreaterThan"] = {sid: "analog_input:15"};
	this.sidHashMap["analog_input:15"] = {rtwname: "<S1>/GreaterThan"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "analog_input:12"};
	this.sidHashMap["analog_input:12"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/lamp"] = {sid: "analog_input:3"};
	this.sidHashMap["analog_input:3"] = {rtwname: "<S1>/lamp"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();

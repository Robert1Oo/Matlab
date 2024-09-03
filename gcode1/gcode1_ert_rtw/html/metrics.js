function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["rtU"] = {file: "/home/roberto/Matlab/gcode1/gcode1_ert_rtw/gcode1.c",
	size: 1};
	 this.metricsArray.var["rtY"] = {file: "/home/roberto/Matlab/gcode1/gcode1_ert_rtw/gcode1.c",
	size: 1};
	 this.metricsArray.fcn["gcode1_initialize"] = {file: "/home/roberto/Matlab/gcode1/gcode1_ert_rtw/gcode1.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["gcode1_step"] = {file: "/home/roberto/Matlab/gcode1/gcode1_ert_rtw/gcode1.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["lamp_func"] = {file: "/home/roberto/Matlab/gcode1/gcode1_ert_rtw/lamp_func.c",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="gcode1_metrics.html">Global Memory: 2(bytes) Maximum Stack: 0(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();

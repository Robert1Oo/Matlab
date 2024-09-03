function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["analog_input_M_"] = {file: "/home/roberto/analog_input_ert_rtw/analog_input.c",
	size: 8};
	 this.metricsArray.var["analog_input_U"] = {file: "/home/roberto/analog_input_ert_rtw/analog_input.c",
	size: 2};
	 this.metricsArray.var["analog_input_Y"] = {file: "/home/roberto/analog_input_ert_rtw/analog_input.c",
	size: 1};
	 this.metricsArray.fcn["analog_input_Subsystem"] = {file: "/home/roberto/analog_input_ert_rtw/Subsystem.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["analog_input_initialize"] = {file: "/home/roberto/analog_input_ert_rtw/analog_input.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["analog_input_step"] = {file: "/home/roberto/analog_input_ert_rtw/analog_input.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["analog_input_terminate"] = {file: "/home/roberto/analog_input_ert_rtw/analog_input.c",
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
	 this.codeMetricsSummary = '<a href="analog_input_metrics.html">Global Memory: 11(bytes) Maximum Stack: 0(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();

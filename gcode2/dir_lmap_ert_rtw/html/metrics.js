function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["dir_lmap_M_"] = {file: "/home/roberto/dir_lmap_ert_rtw/dir_lmap.c",
	size: 8};
	 this.metricsArray.var["dir_lmap_U"] = {file: "/home/roberto/dir_lmap_ert_rtw/dir_lmap.c",
	size: 2};
	 this.metricsArray.var["dir_lmap_Y"] = {file: "/home/roberto/dir_lmap_ert_rtw/dir_lmap.c",
	size: 2};
	 this.metricsArray.fcn["dir_lmap_directional_light_func"] = {file: "/home/roberto/dir_lmap_ert_rtw/directional_light_func.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["dir_lmap_initialize"] = {file: "/home/roberto/dir_lmap_ert_rtw/dir_lmap.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["dir_lmap_step"] = {file: "/home/roberto/dir_lmap_ert_rtw/dir_lmap.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["dir_lmap_terminate"] = {file: "/home/roberto/dir_lmap_ert_rtw/dir_lmap.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["memset"] = {file: "/usr/local/MATLAB/R2018b/sys/lcc/include/string.h",
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
	 this.codeMetricsSummary = '<a href="dir_lmap_metrics.html">Global Memory: 12(bytes) Maximum Stack: 0(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();

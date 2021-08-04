vuser_init()
{
	web_set_max_html_param_len("9999");
	web_set_timeout(CONNECT,"999");
	web_set_timeout(RECEIVE,"999");
	web_set_timeout(STEP,"999");
	web_cache_cleanup();
	web_cleanup_cookies();
	
   web_set_sockets_option("SSL_VERSION","TLS1.2");
	
	web_add_auto_header("Sec-Fetch-Site","none");

	web_add_auto_header("Sec-Fetch-Mode","navigate");

	web_add_auto_header("Sec-Fetch-Dest","document");

	web_add_auto_header("Sec-Fetch-User", "?1");

	web_add_auto_header("Upgrade-Insecure-Requests","1");
	
	web_add_header("Origin", 
		"https://lt.xcmsolutions.com/xcmv2");
	
	web_reg_save_param_regexp(
		"ParamName=C_Xaid",
		"RegExp=\\{xpid:\"(.*?)\",licenseKey:",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/login*",
		"Notfound=warning",
		LAST);

	lr_start_transaction("S01_XCM_MVPCC_LF_TR01_Launch_URL");

		web_reg_find("Search=Body",
		"Text=Remember Email?",
		LAST);

	web_url("xcmv2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/account/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("S01_XCM_MVPCC_LF_TR01_Launch_URL", LR_AUTO);

lr_think_time(3);

web_add_header("Sec-Fetch-Site",
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
               
		"1");
		
	web_reg_save_param("C_firmId","LB=\"firmId\":","RB=,\"integrationId\":",LAST);
		

	lr_start_transaction("S01_XCM_MVPCC_LF_TR02_Perform_Login");

		web_submit_data("Login", 
		"Action=https://lt.xcmsolutions.com/xcmv2/Account/Login?ReturnUrl=%2Fxcmv2%2F", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/account/login?ReturnUrl=%2Fxcmv2%2F", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=Email", "Value={P_Email}", ENDITEM, 
		"Name=Password", "Value=xcm@#@WK", ENDITEM, 
		"Name=RememberMe", "Value=false", ENDITEM, 
		LAST);

	
	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("task", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task?query=%7B%22bucketName%22%3A%22TATM%22%7D", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_custom_request("status", 
		"URL=https://lt.xcmsolutions.com/xcmv2/account/status?1614838963311", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");


	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("userbuckets", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/userbuckets", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	/*logged*/

	web_url("MyView", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/taskcolumn/MyView", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("S01_XCM_MVPCC_LF_TR02_Perform_Login", LR_AUTO);
return 0;
}

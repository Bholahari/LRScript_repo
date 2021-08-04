vuser_end()
{
	lr_think_time(2);
	
	lr_start_transaction("S01_XCM_MVPCC_LF_TR12_Logout");


//	web_url("file-template.html",
//		"URL= https://lt.xcmsolutions.com/xcmv2/widget/template/file-template.html",
//		"TargetFrame=",
//		"Resource=0",
//		"RecContentType=text/html",
//		"Referer= https://lt.xcmsolutions.com/xcmv2/routing/?tid=MjY5MzY4MDU=",
//		"Snapshot=t24.inf",
//		"Mode=HTML",
//		LAST);

	
	web_reg_find("Search=Body",
		"Text=Log in",
		LAST);

	web_url("login_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/account/login?ReturnUrl=%2Fxcmv2%2F", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);
	
	/*logoff*/

	web_revert_auto_header("X-NewRelic-ID");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("xcmv2_3", 
		"URL= https://lt.xcmsolutions.com/xcmv2/Account/Login?ReturnUrl=%2Fxcmv2%2F", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("S01_XCM_MVPCC_LF_TR12_Logout", LR_AUTO);
	
	return 0;
}

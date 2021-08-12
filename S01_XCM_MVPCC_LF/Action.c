Action()
{
	
	//adding a new line in the script-8/12/2021
int x,i,j,z,l;
	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	lr_think_time(2);
	lr_start_transaction("S01_XCM_MVPCC_LF");


	lr_start_transaction("S01_XCM_MVPCC_LF_TR03_Utilities");

		web_reg_find("Search=Body",
		"Text=XCM #1 Workflow System",
		LAST);

	web_url("CPAUtilities", 
		"URL=https://lt.xcmsolutions.com/xcmv2/CPAUtilities", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("S01_XCM_MVPCC_LF_TR03_Utilities", LR_AUTO);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(2);
	
	lr_start_transaction("S01_XCM_MVPCC_LF_TR04_ManageCustomGridSettings");

		web_reg_find("Search=Body",
		"Text=Search",
		LAST);

	web_url("CustomGridSetting", 
		"URL=https://lt.xcmsolutions.com/xcmv2/CustomGridSetting", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/XCM/CPAUtilities.aspx", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Origin", 
		"https://lt.xcmsolutions.com");

	/*manage custom grid settings*/

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("myview", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/customgridsettings/myview", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/CustomGridSetting", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("S01_XCM_MVPCC_LF_TR04_ManageCustomGridSettings", LR_AUTO);

	web_add_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://ogs.google.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

//	web_add_header("X-Client-Data", 
//		"CJW2yQEIpLbJAQjEtskBCKmdygEI+MfKAQikzcoBCNzVygEIxpzLAQjknMsBCKidywE=");


	/*restore*/

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	lr_think_time(2);

	lr_start_transaction("S01_XCM_MVPCC_LF_TR05_MyViewTab_SelecttheFields&Clickon_SaveforMyView&SearchButton");

		web_reg_find("Search=Body",
		"Text=[{\"ColumnHeader\"",
		LAST);

	web_custom_request("myview_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/customgridsettings/add/default/myview", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/CustomGridSetting", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	/*save my view*/

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("myviewandSearch", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/customgridsettings/add/myviewandSearch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/CustomGridSetting", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"ColumnHeader\":\"Client/Entity\",\"ColumnID\":1,\"ColumnMouseOver\":\"Client/Entity Name\",\"ColumnName\":\"Client/Entity\",\"ColumnUniqueID\":\"clientName\",\"ColumnWidth\":8,\"FirmID\":{C_firmId},\"GroupName\":\"Client\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":1},{\"ColumnHeader\":\"Number\",\"ColumnID\":2,\""
		"ColumnMouseOver\":\"Number\",\"ColumnName\":\"Number\",\"ColumnUniqueID\":\"clientAccountNumber\",\"ColumnWidth\":5,\"FirmID\":{C_firmId},\"GroupName\":\"Client\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":2},{\"ColumnHeader\":\"Type\",\"ColumnID\":3,\"ColumnMouseOver\":\"Task Type\",\"ColumnName\":\"Type of Task\",\""
		"ColumnUniqueID\":\"taskTypeName\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":3},{\"ColumnHeader\":\"PED\",\"ColumnID\":4,\"ColumnMouseOver\":\"Period End Date\",\"ColumnName\":\"Period End\",\"ColumnUniqueID\":\"periodEndDate\",\"ColumnWidth\":6,\"FirmID\":{C_firmId},\""
		"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":4},{\"ColumnHeader\":\"Cat.\",\"ColumnID\":5,\"ColumnMouseOver\":\"Category\",\"ColumnName\":\"Task Category\",\"ColumnUniqueID\":\"categoryId\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\""
		"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":5},{\"ColumnHeader\":\"Desc\",\"ColumnID\":6,\"ColumnMouseOver\":\"Description\",\"ColumnName\":\"Description\",\"ColumnUniqueID\":\"description\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\""
		"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":6},{\"ColumnHeader\":\"Status\",\"ColumnID\":7,\"ColumnMouseOver\":\"Current Status\",\"ColumnName\":\"Status\",\"ColumnUniqueID\":\"currentStatus\",\"ColumnWidth\":8,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":true,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,"
		"\"SortID\":7},{\"ColumnHeader\":\"Start Date\",\"ColumnID\":8,\"ColumnMouseOver\":\"Start Date\",\"ColumnName\":\"Start Date\",\"ColumnUniqueID\":\"start_on\",\"ColumnWidth\":6,\"FirmID\":{C_firmId},\"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":8},{\"ColumnHeader\":\"Due Date\",\"ColumnID\":9,\""
		"ColumnMouseOver\":\"Due Date\",\"ColumnName\":\"Due Date\",\"ColumnUniqueID\":\"due_on\",\"ColumnWidth\":6,\"FirmID\":{C_firmId},\"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":9},{\"ColumnHeader\":\"Last Chg\",\"ColumnID\":10,\"ColumnMouseOver\":\"Last Changed Date\",\"ColumnName\":\"Last Chg\",\""
		"ColumnUniqueID\":\"updated_on\",\"ColumnWidth\":10,\"FirmID\":{C_firmId},\"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":10},{\"ColumnHeader\":\"ADD\",\"ColumnID\":11,\"ColumnMouseOver\":\"Anticipated Delivery Date\",\"ColumnName\":\"Anticipated Delivery Date\",\"ColumnUniqueID\":\"anticipation_date\",\""
		"ColumnWidth\":6,\"FirmID\":{C_firmId},\"GroupName\":\"Dates\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":11},{\"ColumnHeader\":\"Who Has\",\"ColumnID\":12,\"ColumnMouseOver\":\"Who Has Task\",\"ColumnName\":\"Who Has\",\"ColumnUniqueID\":\"Full_assigned_name\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\""
		"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":12},{\"ColumnHeader\":\"Ext\",\"ColumnID\":13,\"ColumnMouseOver\":\"Extension Task\",\"ColumnName\":\"Ext\",\"ColumnUniqueID\":\"extensionTask\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Extension\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\""
		":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":13},{\"ColumnHeader\":\"Who Has Ext\",\"ColumnID\":14,\"ColumnMouseOver\":\"Who Has Extension\",\"ColumnName\":\"Who Has Ext\",\"ColumnUniqueID\":\"Full_ext_assigned_to_name\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Extension\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\""
		"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":14},{\"ColumnHeader\":\"Ori\",\"ColumnID\":15,\"ColumnMouseOver\":\"Originating Location\",\"ColumnName\":\"Originating Location\",\"ColumnUniqueID\":\"originatingLocation\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\""
		"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":15},{\"ColumnHeader\":\"Curr\",\"ColumnID\":16,\"ColumnMouseOver\":\"Current Location\",\"ColumnName\":\"Current Location\",\"ColumnUniqueID\":\"currentLocation\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\""
		":16},{\"ColumnHeader\":\"Pts\",\"ColumnID\":17,\"ColumnMouseOver\":\"Points\",\"ColumnName\":\"Issues & Points\",\"ColumnUniqueID\":\"points\",\"ColumnWidth\":2,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":17},{\"ColumnHeader\":\"Ckl\",\"ColumnID\":18,\"ColumnMouseOver\":\"Checklists\",\""
		"ColumnName\":\"Check List\",\"ColumnUniqueID\":\"checklists\",\"ColumnWidth\":2,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":18},{\"ColumnHeader\":\"DTL\",\"ColumnID\":19,\"ColumnMouseOver\":\"Details\",\"ColumnName\":\"Details\",\"ColumnUniqueID\":\"details\",\"ColumnWidth\":2,\"FirmID\""
		":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":19},{\"ColumnHeader\":\"P\",\"ColumnID\":20,\"ColumnMouseOver\":\"Priority\",\"ColumnName\":\"Priority\",\"ColumnUniqueID\":\"priority\",\"ColumnWidth\":2,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\""
		"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":20},{\"ColumnHeader\":\"D\",\"ColumnID\":21,\"ColumnMouseOver\":\"Difficulty\",\"ColumnName\":\"Difficulty\",\"ColumnUniqueID\":\"difficulty\",\"ColumnWidth\":2,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":true,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\""
		"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":21},{\"ColumnHeader\":\"Del Count\",\"ColumnID\":86,\"ColumnMouseOver\":\"Deliverable Count\",\"ColumnName\":\"Deliverable Count\",\"ColumnUniqueID\":\"Deliverable_Count\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\""
		"ParentID\":0,\"Selected\":true,\"SortID\":22},{\"ColumnHeader\":\"Docs\",\"ColumnID\":89,\"ColumnMouseOver\":\"Linked Documents\",\"ColumnName\":\"Linked Documents\",\"ColumnUniqueID\":\"Linked_Documents\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":23},{\""
		"ColumnHeader\":\"Linked Tasks\",\"ColumnID\":87,\"ColumnMouseOver\":\"Linked Tasks\",\"ColumnName\":\"Linked Tasks\",\"ColumnUniqueID\":\"Linked_Tasks\",\"ColumnWidth\":3,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":24},{\"ColumnHeader\":\"Asmbly Instrn\",\"ColumnID\":83,\""
		"ColumnMouseOver\":\"Assembly Instructions\",\"ColumnName\":\"Assembly Instructions\",\"ColumnUniqueID\":\"Assembly_Instructions\",\"ColumnWidth\":8,\"FirmID\":{C_firmId},\"GroupName\":\"Task\",\"IsAdminChecklistColumn\":false,\"IsDefault\":false,\"IsMandatoryColumn\":false,\"IsMyChecklistColumn\":false,\"IsRasCal\":false,\"IsSearchColumn\":false,\"IsViewColumn\":true,\"ParentID\":0,\"Selected\":true,\"SortID\":25}]", 
		LAST);

	

	lr_end_transaction("S01_XCM_MVPCC_LF_TR05_MyViewTab_SelecttheFields&Clickon_SaveforMyView&SearchButton", LR_AUTO);
	
web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
		for(z=1;z<=10;z++)
	{
	
	web_url("quicksearchforclient", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/firmsettings/quicksearchforclient?term=a", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t866.inf", 
		"Mode=HTML", 
		LAST);
	}
		lr_think_time(2);

	lr_start_transaction("S01_XCM_MVPCC_LF_TR06_Clickon_MyView");

		web_reg_find("Search=Body",
		"Text= Admin Tasks",
		LAST);

	web_url("xcmv2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/CPAUtilities", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	

	web_url("task_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task?query=%7B%22bucketName%22%3A%22TATM%22%7D", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_custom_request("status_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/account/status?1614839072390", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("userbuckets_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/userbuckets", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	/*mybiew*/

	web_url("MyView_2", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/taskcolumn/MyView", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("S01_XCM_MVPCC_LF_TR06_Clickon_MyView", LR_AUTO);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
lr_think_time(2);

/*Correlation comment - Do not change!  Original value='17689153' Name ='id' Type ='Manual'*/
	web_reg_save_param_json(
		"ParamName=id",
		"QueryString=$[0].id",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);
		//web_reg_save_param("C_Clientlist","LB={\"id\":","RB=,\"clientId\"","ord=all",LAST);
		//,"clientId":1538305,"categoryId":
		
web_reg_save_param("C_ClientID","LB=,\"clientId\":","RB=,\"categoryId\":","ord=all",LAST);

	lr_start_transaction("S01_XCM_MVPCC_LF_TR07_ClickonView&SelecttheRequiredViewName");

		web_url("task_3", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task?query=%7B%22bucketName%22%3A%22TAXC%22%7D", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

/*Correlation comment: Convert Data - Do not change!  Name ='id' */
	web_convert_from_formatted("FormattedData=<LR_EXTENSION name=\"Base64\">{id}</LR_EXTENSION>", 
		"TargetParam=id_TOBASE64", 
		LAST);

	/*click viewname*/

	x=atoi(lr_eval_string("{C_ClientID_count}"));
	
	web_url("MyView_3", 
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/taskcolumn/MyView", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);
	if(x>=0)
	{
		lr_end_transaction("S01_XCM_MVPCC_LF_TR07_ClickonView&SelecttheRequiredViewName", LR_PASS);
		
	}
else
{
	lr_end_transaction("S01_XCM_MVPCC_LF_TR07_ClickonView&SelecttheRequiredViewName", LR_FAIL);
	
}

	
	
	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	lr_think_time(2);
	
	
	
lr_start_transaction("S01_XCM_MVPCC_LF_TR08_Clickon ClientName");

		
	web_reg_find("Search=Body",
		"Text=Routing Sheet",
		LAST);

	web_url("routing",
		"URL=https://lt.xcmsolutions.com/xcmv2/routing/?tid={id_TOBASE64}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://lt.xcmsolutions.com/xcmv2/",
		"Snapshot=t33.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
		web_reg_save_param("C_associatedStatusId","LB=categoryId\":1,\"id\":","RB=},",LAST);
for(i=1;i<=4;i++)
	{
		
	web_custom_request("273",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/controlsheet/{id}/898609/1/273",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={id_TOBASE64}",
		"Snapshot=t34.inf",
		"Mode=HTML",
		LAST);
}

	web_revert_auto_header("X-Requested-With");

	web_custom_request("userautosuggest",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/user/userautosuggest",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={id_TOBASE64}",
		"Snapshot=t35.inf",
		"Mode=HTML",
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("login-template.html",
		"URL=https://lt.xcmsolutions.com/xcmv2/widget/template/cch/login-template.html",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={id_TOBASE64}",
		"Snapshot=t36.inf",
		"Mode=HTML",
		LAST);

	web_url("document-template.html",
		"URL=https://lt.xcmsolutions.com/xcmv2/widget/template/cch/document-template.html",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={id_TOBASE64}",
		"Snapshot=t37.inf",
		"Mode=HTML",
		LAST);

	/*select clientname*/

	web_url("file-template.html",
		"URL=https://lt.xcmsolutions.com/xcmv2/widget/template/file-template.html",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={id_TOBASE64}",
		"Snapshot=t38.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("S01_XCM_MVPCC_LF_TR08_Clickon ClientName", LR_AUTO);


	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(2);
	
	lr_start_transaction("S01_XCM_MVPCC_LF_TR09_Clickon NumbersUnder_HeadingofPts");

		web_reg_find("Search=Body",
		"Text=success",
		LAST);

	web_submit_data("17689153",
		"Action=https://lt.xcmsolutions.com/xcmv2/api/points/add/{id}",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={id_TOBASE64}",
		"Snapshot=t40.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=points", "Value=<p>points added</p>", ENDITEM,
		"Name=typeId", "Value=1", ENDITEM,
		"Name=carryOver", "Value=C", ENDITEM,
		"Name=priorYearAmount", "Value=", ENDITEM,
		"Name=reference", "Value=", ENDITEM,
		"Name=extensionType", "Value=false", ENDITEM,
		LAST);

	/*points added*/

	web_revert_auto_header("Origin");

	web_url("points",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/points?query={id}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={id_TOBASE64}",
		"Snapshot=t41.inf",
		"Mode=HTML",
		LAST);


	lr_end_transaction("S01_XCM_MVPCC_LF_TR09_Clickon NumbersUnder_HeadingofPts", LR_AUTO);
	

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Origin", 
		"https://lt.xcmsolutions.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	lr_think_time(2);

	lr_start_transaction("S01_XCM_MVPCC_LF_TR10_Clickon NumbersUnder_HeadingofCkl");

		web_reg_find("Search=Body",
		"Text=success",
		LAST);

	web_submit_data("checklists",
		"Action=https://lt.xcmsolutions.com/xcmv2/api/checklists",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={id_TOBASE64}",
		"Snapshot=t43.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=associatedStatusId", "Value={C_associatedStatusId}", ENDITEM,
		"Name=completionDueOn", "Value=1/1/1900", ENDITEM,
		"Name=assignToAdmin", "Value=false", ENDITEM,
		"Name=assignedPersonId", "Value=0", ENDITEM,
		"Name=checklistDescription", "Value=<p>{P_Desc}</p>", ENDITEM,
		"Name=taskId", "Value={id}", ENDITEM,
		"Name=checklistItem", "Value=", ENDITEM,
		LAST);

	/*checklist*/

	web_revert_auto_header("Origin");

	web_url("checklists_2",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/checklists?query={id}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/routing/?tid={id_TOBASE64}",
		"Snapshot=t44.inf",
		"Mode=HTML",
		LAST);


	lr_end_transaction("S01_XCM_MVPCC_LF_TR10_Clickon NumbersUnder_HeadingofCkl", LR_AUTO);
	
	lr_think_time(2);
	
	lr_start_transaction("S01_XCM_MVPCC_LF_TR11_Clickon NumbersUnder_HeadingofDtl");

web_url("details", 
		"URL=https://lt.xcmsolutions.com/xcmv2/task/details", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://lt.xcmsolutions.com/xcmv2/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_reg_find("Text=assignedBy","SaveCount=heading","Fail=NotFound",LAST);

	web_url("2153034_2",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/tasktrack/{id}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/task/details",
		"Snapshot=t132.inf",
		"Mode=HTML",
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("2153034_3",
		"URL=https://lt.xcmsolutions.com/xcmv2/api/task/tasktrackatualtime/{id}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://lt.xcmsolutions.com/xcmv2/task/details",
		"Snapshot=t133.inf",
		"Mode=HTML",
		LAST);

lr_end_transaction("S01_XCM_MVPCC_LF_TR11_Clickon NumbersUnder_HeadingofDtl", LR_AUTO);

lr_end_transaction("S01_XCM_MVPCC_LF", LR_AUTO);


	return 0;
}

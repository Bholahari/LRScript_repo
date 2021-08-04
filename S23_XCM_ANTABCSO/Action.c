Action()
{
	
	
	lr_start_transaction("S23_XCM_ANTABCSO");
	
	lr_save_string("01","TN1");
	AddTask();
	
	lr_save_string("02","TN1");
	Save_OpenTask();
	
	lr_save_string("03","TN1");
	GeneraTaskInfo();
	
	lr_save_string("04","TN1");
	CustomFiled();
	
	lr_save_string("05","TN1");
	Staffing();
	
	lr_save_string("06","TN1");
	CreateDeliverables();
	
	lr_save_string("07","TN1");
	Assembly();
	
	lr_save_string("08","TN1");
	Shipping();
	
	lr_save_string("09","TN1");
	efile();
	
	lr_save_string("10","TN1");
	Points();
	
	lr_save_string("11","TN1");
	CheckList();
	
	lr_save_string("12","TN1");
	Signoff();
	
	lr_save_string("13","TN1");
	Extensions();
	
	
	lr_save_string("14","TN1");
	Engagement();
	
	lr_save_string("15","TN1");
	LinkTask();
	
	
	lr_save_string("16","TN1");
	Rollover_1Year();
	
	lr_save_string("17","TN1");
	MoveTask();
		
		

	lr_end_transaction("S23_XCM_ANTABCSO", LR_AUTO);

	
	return 0;
}
ClickRun1()
{
	
		
	
	lr_save_string("04","TN1");
	ClickRun();
	
    //lr_think_time(300);
    
	lr_end_transaction("S19_XCM_SBTDR_SF", LR_AUTO);
//	lr_output_message("username is %s",lr_eval_string("{P_Username}"));
	return 0;
}



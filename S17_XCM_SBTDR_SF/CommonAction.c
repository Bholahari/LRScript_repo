CommonAction()
{
	
	lr_start_transaction("S19_XCM_SBTDR_SF");
	
	lr_save_string("01","TN1");
	Click_schedular();
	
	
	lr_save_string("02","TN1");
	ScheduleByTask();
	
	
	lr_save_string("03","TN1");
	TaskCalenderReport();

	
	
	return 0;
}

Login()
{
	
	doLogin = checkDoLogin();
	doLogout = checkDoLogout();
//	lr_save_int(doLogin,"doLogin"); lr_save_int(doLogout,"doLogout");
//	lr_output_message("IterationNumber : %s | doLogin : %s | doLogout : %s",lr_eval_string("{IterationNumber}"), lr_eval_string("{doLogin}"),lr_eval_string("{doLogout}"));
//		
	if(doLogin ==1)
	{
		xcmLogin();
	}
	return 0;
}

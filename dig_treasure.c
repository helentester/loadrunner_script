Action()
{
/*		
	web_reg_save_param_ex(
		"ParamName=loginText",
		"LB=",
		"RB=",
		SEARCH_FILTERS,
		LAST);
*/
	web_submit_data("login", 
		"Action=http://dev.xsteach.com/site/pop-login?", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=LoginForm[username]", "Value=helen_14_04", ENDITEM, 
		"Name=LoginForm[password]", "Value=123456", ENDITEM, 
		"Name=LoginForm[rememberMe]", "Value=0", ENDITEM, 
		LAST);
	
/*	web_reg_save_param_ex(
		"ParamName=dataText",
		"LB=",
		"RB=",
		SEARCH_FILTERS,
		LAST);

	老师藏宝
	web_reg_find("Text=success", LAST);
	web_submit_data("web_submit_data",
		"Action=http://api.dev.xsteach.com/v2/new-live/send-treasure",
		"Method=POST",
		//"TargetFrame=",
		"Referer=",
		"Mode=HTTP",
		ITEMDATA,
		"Name=amount", "Value=10", ENDITEM,
		"Name=expire_duration", "Value=30", ENDITEM,
		"Name=live_course_id", "Value=439", ENDITEM,
		"Name=number", "Value=2", ENDITEM,
		"Name=signal", "Value=test", ENDITEM,
		LAST);*/
		
	lr_start_transaction("dig-treasure");
	web_reg_find("Text=success", LAST);
	web_submit_data("web_submit_data",
		"Action=http://api.dev.xsteach.com/v2/new-live/dig-treasure",
		"Method=POST",
		"TargetFrame=",
		"Referer=",
		"Mode=HTTP",
		ITEMDATA,
		"Name=live_course_id", "Value=439", ENDITEM,
		"Name=treasure_id", "Value=554", ENDITEM,
		"Name=user_id", "Value=8397617", ENDITEM,
		LAST);

	lr_end_transaction("dig-treasure",LR_AUTO);
	//lr_output_message(lr_eval_string("{dataText}"));
	return 0;
}

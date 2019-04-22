Action()
{

	
	lr_rendezvous("getAppHomeModulesList");

	lr_start_transaction("getAppHomeModulesList");

/*
    web_reg_save_param("appHomeModulesListResult",
                       "LB=code\":",
                       "RB=,\"msg",
                       LAST);
					   */

	web_add_header("Content-Type",	"application/json");

	web_add_header("requestid",	"8eaf210f-70bd-4730-aad8-32f03b61d5a8");//也可动态生成UUID

	web_add_header("channelId",	"android");

	web_add_header("usertype",	"member");

    web_save_timestamp_param("tStamp", LAST);  

	web_add_header("timestamp",  "{tStamp}");

    
	web_reg_find("Search=Body",  
				// "SaveCount=1", 
				 "Text=\"code\":10000", 
				 LAST);

	web_custom_request("web_custom_request",
		"URL=http://wufuapi.wufu360.com:8032/userCenter/member/v1/appHomeModulesList",
		"Method=POST",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body={\"releasePlatform\":1,\"type\":0}",
		LAST);

 //   lr_output_message(lr_eval_string("{appHomeModulesListResult}"));

    
	lr_end_transaction("getAppHomeModulesList", LR_AUTO);


	return 0;
}

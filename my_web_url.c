my_web_url()
{
	/**
	 int web_url( const char *StepName, 
			const char *url, 
			<List of Attributes>,
			EXTRARES, 
			<List of Resource Attributes>,
			LAST );
	 
	 作用：加载指定的网页（GET请求）
	 
	 参数说明：
		1)	StepName：步骤名称，如果开启了Automatic Transactions（自动化事务），则它同时也是事物名称；
		2)	url：需要加载的Web页面的URL(Uniform Resource Locator) ，格式为："URL="；
		3)	List of Attributes：属性列表；
		4)	EXTRARES：划界参数，标识下一个参数将是资源列表；
		5)	List of Resource Attributes：资源属性列表；
		6)	LAST：标识参数列表结束的标记。
		
	其他说明：
		1）web_url仅在VuGen处于基于URL的记录模式或基于HTML的记录模式时记录，其中A脚本仅包含显式URL选项（参见VuGen的记录选项）
		2) EXTRARES后的资源是由script、active、java applet、flash、CSS产生的请求,如果删除这些资源，测试的时候LR就不会去下载这些资源，会造成结果不真实！
		3) ENDITEM ：列表中每个资源的结束标志符

	 */
	web_url("dev.jinengxia.com", 	//步骤名称
		"URL=http://dev.jinengxia.com/",	 //要加载的网页URL
		"Resource=0", 	//指示URL是否是资源的值：0=该URL不是资源，1=URL是资源
		"RecContentType=text/html", 	//记录期间RESPONSE标头的内容类型，例如，text/html，application/x-javascript。抓包则对应头信息的Content-Type
		"Referer=", 	//引用网页的URL。
		"Snapshot=t13.inf", //用于关联的快照文件的文件名（inf扩展名）。
		"Mode=HTML", 	//录制级别：HTML或HTTP。
		EXTRARES,	// 划界参数，标识下一个参数将是资源列表；
		"Url=/dist/css/common/global.css", ENDITEM, 
		"Url=/dist/css/home/home.css", ENDITEM, 
		"Url=/assets/ef4254a3/jquery.js", ENDITEM, 
		"Url=/assets/bf97c8fe/yii.js", ENDITEM, 
		"Url=/static/scripts/global.js", ENDITEM, 
		"Url=/dist/scripts/common/bxslider/bxslider.js", ENDITEM, 
		"Url=/dist/images/home/hot.png", ENDITEM, 
		"Url=/dist/images/home/course-cover.jpg", ENDITEM, 
		"Url=/dist/images/home/avatar-1.png", ENDITEM, 
		"Url=/dist/images/home/pos-1.png", ENDITEM, 
		"Url=/dist/images/home/avatar-2.png", ENDITEM, 
		"Url=/dist/images/home/pos-2.png", ENDITEM, 
		"Url=/dist/images/home/avatar-3.png", ENDITEM, 
		"Url=/dist/images/home/pos-3.png", ENDITEM, 
		"Url=/dist/images/home/avatar-4.png", ENDITEM, 
		"Url=/dist/images/home/pos-4.png", ENDITEM, 
		"Url=/dist/images/home/banner-01.jpg", "Referer=http://dev.jinengxia.com/dist/css/home/home.css", ENDITEM, 
		"Url=/dist/images/home/work-1.jpg", ENDITEM, 
		"Url=/dist/images/home/work-2.jpg", ENDITEM, 
		"Url=/dist/images/home/work-3.jpg", ENDITEM, 
		"Url=/dist/images/home/work-4.jpg", ENDITEM, 
		"Url=/dist/images/home/work-5.jpg", ENDITEM, 
		"Url=/dist/images/home/work-6.jpg", ENDITEM, 
		"Url=/dist/images/home/theme.png", ENDITEM, 
		"Url=/dist/images/common/qrcode.jpg", ENDITEM, 
		"Url=/dist/images/home/bg-community-line.png", "Referer=http://dev.jinengxia.com/dist/css/home/home.css", ENDITEM, 
		"Url=/dist/images/home/bg-community.png", "Referer=http://dev.jinengxia.com/dist/css/home/home.css", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
		LAST);
	
	return 0;
}

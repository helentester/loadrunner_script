my_web_url()
{
	/**
	 int web_url( const char *StepName, 
			const char *url, 
			<List of Attributes>,
			EXTRARES, 
			<List of Resource Attributes>,
			LAST );
	 
	 ���ã�����ָ������ҳ��GET����
	 
	 ����˵����
		1)	StepName���������ƣ����������Automatic Transactions���Զ������񣩣�����ͬʱҲ���������ƣ�
		2)	url����Ҫ���ص�Webҳ���URL(Uniform Resource Locator) ����ʽΪ��"URL="��
		3)	List of Attributes�������б�
		4)	EXTRARES�������������ʶ��һ������������Դ�б�
		5)	List of Resource Attributes����Դ�����б�
		6)	LAST����ʶ�����б�����ı�ǡ�
		
	����˵����
		1��web_url����VuGen���ڻ���URL�ļ�¼ģʽ�����HTML�ļ�¼ģʽʱ��¼������A�ű���������ʽURLѡ��μ�VuGen�ļ�¼ѡ�
		2) EXTRARES�����Դ����script��active��java applet��flash��CSS����������,���ɾ����Щ��Դ�����Ե�ʱ��LR�Ͳ���ȥ������Щ��Դ������ɽ������ʵ��
		3) ENDITEM ���б���ÿ����Դ�Ľ�����־��

	 */
	web_url("dev.jinengxia.com", 	//��������
		"URL=http://dev.jinengxia.com/",	 //Ҫ���ص���ҳURL
		"Resource=0", 	//ָʾURL�Ƿ�����Դ��ֵ��0=��URL������Դ��1=URL����Դ
		"RecContentType=text/html", 	//��¼�ڼ�RESPONSE��ͷ���������ͣ����磬text/html��application/x-javascript��ץ�����Ӧͷ��Ϣ��Content-Type
		"Referer=", 	//������ҳ��URL��
		"Snapshot=t13.inf", //���ڹ����Ŀ����ļ����ļ�����inf��չ������
		"Mode=HTML", 	//¼�Ƽ���HTML��HTTP��
		EXTRARES,	// �����������ʶ��һ������������Դ�б�
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

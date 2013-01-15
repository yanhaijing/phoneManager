/**
	@author
	@date:2012.6.26
	@cropyright:
	@content:the addRecord module
*/

#include "main.h"

extern int getRecordCount();
extern struct tele_record saArrayRecord[TELE_RECORD_COUNT];

/**
	@in:
	@return:int(0|1)
	@function:add record
*/
int addRecord()
{
	int iCount = 0;//添加记录的数量默认为零
	int i;
	int iNum;//电话号码
	char *caContent = NULL;//留言内容
	int iRecordCount = getRecordCount();//当前电话本记录的数量
	

	struct myTime currentTime = myTime();
	clearScreen();

	cout<<"　　-------------------添加电话信息-----------------\n";
	cout<<"		请输入添加记录的数量：";
	cin>>iCount;
	
	for(i = 0;i < iCount;i++)
	{
		caContent = new char[100];//申请空间

		cout<<"	添加第"<<i<<"条：\n";
		cout<<"		电话：";
		cin>>iNum;
		cout<<"		内容：";
		cin>>caContent;

		//添加到当前记录
		saArrayRecord[i + iRecordCount].number = iNum;
		saArrayRecord[i + iRecordCount].event = caContent; 
		saArrayRecord[i + iRecordCount].t_date.year = currentTime.iYear;
		saArrayRecord[i + iRecordCount].t_date.month = currentTime.iMonth;
		saArrayRecord[i + iRecordCount].t_date.day = currentTime.iDate;
		saArrayRecord[i + iRecordCount].t_time.hour = currentTime.iHour;
		saArrayRecord[i + iRecordCount].t_time.min = currentTime.iMin;
		saArrayRecord[i + iRecordCount].t_time.second = currentTime.iSecond;
	}
	
	cout<<"　　--------------------------------------------------\n"<<endl;

	system("color 2f");//change color
	cout<<"	添加成功，操作后"<<endl<<endl;
	showRecord();
	pause();//pause
	system("color 4e");//change color
	clearScreen();//clear screen

	home();

	return 1;
}

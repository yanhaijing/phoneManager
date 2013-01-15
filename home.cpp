/**
	@author
	@date:2012.6.26
	@cropyright:
	@content:the home module
*/

//inlude header file
#include "main.h"

//extern
extern struct tele_record saArrayRecord[TELE_RECORD_COUNT];

/**
	@in:
	@return:int(0|1)
	@function:home UI
*/
int home()
{
	int iChoice;//user choice num

	cout<<"　　----------欢迎使用电话留言箱主菜单-----------\n";
	cout<<"　　	浏览留言箱信息，请选择：1\n";
	cout<<"　　	增加留言箱信息，请选择：2\n";
	cout<<"　　	删除留言箱信息，请选择：3\n";
	cout<<"　　	按电话号码查询留言信息，请选择：4\n";
	cout<<"　　	按照电话号码排序留言箱信息，请选择：5\n";
	cout<<"　　	退出，请选择：0\n";
	cout<<"　　---------------------------------------------\n";
	cout<<"　　 请输入你想选择的功能号：";
	cin>>iChoice;
	
	switch(iChoice)
	{
		case 1:
			clearScreen();
			showRecord();
			break;
		case 2:
			addRecord();
			break;
		case 3:
			deleteRecord();
			break;
		case 4:
			queryRecord();
			break;
		case 5:
			sortRecord();
			break;
		default:
			clearScreen();//clear screen;
			exit(0);
			break;
	}
	
	return 1;
}

/**
	@in:
	@return:int(0|1)
	@function:init recrod array function
*/
int initRecordArray()
{
	int i;//accumulator

	//初始化结构体数组
		saArrayRecord[0].number = 11111111;
		saArrayRecord[0].t_date.year = 2012;
		saArrayRecord[0].t_date.month = 1;
		saArrayRecord[0].t_date.day = 23;
		saArrayRecord[0].t_time.hour = 0;
		saArrayRecord[0].t_time.min = 0;
		saArrayRecord[0].t_time.second = 0;
		saArrayRecord[0].event = "钱钱钱钱钱";
		//cout<<saArrayRecord[i].number;

		//初始化结构体数组
		saArrayRecord[1].number = 2222222;
		saArrayRecord[1].t_date.year = 2012;
		saArrayRecord[1].t_date.month = 1;
		saArrayRecord[1].t_date.day = 1;
		saArrayRecord[1].t_time.hour = 0;
		saArrayRecord[1].t_time.min = 0;
		saArrayRecord[1].t_time.second = 0;
		saArrayRecord[1].event = "钱钱钱钱钱";
		//cout<<saArrayRecord[i].number;

	for(i = 2;i < TELE_RECORD_COUNT;i++)
	{
		//struct tele_record *sTemp = new struct tele_record;
		//saArrayRecord[i] = *sTemp;
	
		//初始化结构体数组
		saArrayRecord[i].number = 0;
		saArrayRecord[i].t_date.year = 2012;
		saArrayRecord[i].t_date.month = 1;
		saArrayRecord[i].t_date.day = 1;
		saArrayRecord[i].t_time.hour = 0;
		saArrayRecord[i].t_time.min = 0;
		saArrayRecord[i].t_time.second = 0;
		//cout<<saArrayRecord[i].number;
	}

	return 1;
}
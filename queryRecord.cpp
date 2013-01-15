/**
	@author:
	@date:2012.6.26
	@cropyright:
	@content:the queryRecord module
*/

#include "main.h"

extern int getRecordCount();
extern struct tele_record saArrayRecord[TELE_RECORD_COUNT];

int queryRecord()
{
	int iNum = 0;//查询的电话号码
	int i;

	clearScreen();

	cout<<"　　-------------------探寻吧，你将会有收获-----------------\n"<<endl;
	cout<<"	请输入电话号码：";
	cin>>iNum;

	//在记录中查询结果
	for(i = 0;i < getRecordCount();i++)
	{
		if(saArrayRecord[i].number == iNum)
		{
			break;//查询到退出
		}
	}

	if(i == getRecordCount())
	{
		//查讯不到失败
		cout<<"\n		没有此条记录："<<iNum<<"不存在"<<endl;
	}else
	{
		system("color 2f");//change color
		//查询到结果
		cout<<"	序号	"<<"日期		"<<"时间		"<<"电话号码	"<<"留言内容	\n"<<endl;
		cout<<"	"<<i;
		cout<<"	"<<saArrayRecord[i].t_date.year<<"."<<saArrayRecord[i].t_date.month<<"."<<saArrayRecord[i].t_date.day;
		cout<<"	"<<saArrayRecord[i].t_time.hour<<":"<<saArrayRecord[i].t_time.min<<"."<<saArrayRecord[i].t_time.second;
		cout<<"		"<<saArrayRecord[i].number;
		cout<<"		"<<saArrayRecord[i].event<<endl<<endl;
	}

	pause();//pause
	system("color 4e");//change color
	clearScreen();//clear screen

	home();
	
	return 1;
}
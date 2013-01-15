/**
	@author
	@date:2012.6.26
	@cropyright:
	@content:the showRecord module
*/

#include "main.h"

extern struct tele_record saArrayRecord[TELE_RECORD_COUNT];

/**
	@in:
	@return:int(record count)
	@function:return get Record Counts
*/
int getRecordCount()
{
	int count = 0;
	while(1)
	{
		if(saArrayRecord[count].number != 0)
		{
			count++;
		}
		else
		{
			break;
		}
	}

	return count;
}

/**
	@in:
	@return:int(0|1)
	@function:show record list
*/
int showRecord()
{
	int i;//accumulator
	int iRecordCount = getRecordCount();//记录数

	cout<<"　　-------------------电话留言箱信息-----------------\n\n";
	cout<<"	序号	"<<"日期		"<<"时间		"<<"电话号码	"<<"留言内容	\n"<<endl;
	if(iRecordCount == 0)
	{
		cout<<"\n			*** 空空如也 ***\n"<<endl;
	}
	for(i = 0;i < iRecordCount;i++)
	{
		//print record list
		//cout<<"yan\n"<<endl;

		//输出记录信息
		cout<<"	"<<i;
		cout<<"	"<<saArrayRecord[i].t_date.year<<"."<<saArrayRecord[i].t_date.month<<"."<<saArrayRecord[i].t_date.day;
		cout<<"	"<<saArrayRecord[i].t_time.hour<<":"<<saArrayRecord[i].t_time.min<<"."<<saArrayRecord[i].t_time.second;
		cout<<"		"<<saArrayRecord[i].number;
		cout<<"		"<<saArrayRecord[i].event<<endl<<endl;
	}

	cout<<"　　--------------------------------------------------"<<endl;

	pause();//pause
	clearScreen();//clear screen
	
	home();
	return 1;
}


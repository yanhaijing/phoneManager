/**
	@author:
	@date:2012.6.26
	@cropyright:
	@namemethod:Hungary
	@content:许多家庭的电话都具有留言功能，本程序要求模拟一个真实的电话留言箱，它可以自动获取系统日期和时间，记录打入电话的主要内容。当想阅读留言箱信息时，会自动读取记录并显示；并具有追加留言记录，按照序号删除留言记录，按照电话号码查找留言记录、以及对留言记录进行排序的功能。
*/

#include "main.h"

extern int initRecordArray();
extern int getRecordCount();

struct tele_record saArrayRecord[TELE_RECORD_COUNT];//declare reacrd array 

/**
	@in:
	@return:int(0|1)
	@function:main function procuder entry
*/
int main(){
	
	setTitle();//set title
	system("color 4e");//change color
	initRecordArray();//初始化记录数组

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

	home();
	//forever loop 
	

	return 1;
}
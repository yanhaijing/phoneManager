/**
	@author:
	@date:2012.6.26
	@cropyright
	@content:the deleteRecord module
*/

#include "main.h"

extern int getRecordCount();
extern struct tele_record saArrayRecord[TELE_RECORD_COUNT];

/**
	@in:
	@return:int(0|1)
	@function:delete by record number
*/
int deleteRecordByNumber(int iNum)
{
	int i;

	//删除信息讲要删除的信息的后面信息全部前移
	for(i = iNum;i < getRecordCount();i++)
	{
		saArrayRecord[i] = saArrayRecord[i+1];
	}

	return 1;
}

/**
	@in:
	@return:int(0|1)
	@function:删除记录
*/
int deleteRecord()
{
	int iNum = 0;//存放
	int iDeleteResult = 0;

	clearScreen();

	cout<<"　　-------------------是时候整理下记录了-----------------\n"<<endl;
	cout<<"		请输入要删除记录的记录号：";
	cin>>iNum;
	if(iNum < getRecordCount())
	{
		//删除信息
		iDeleteResult = deleteRecordByNumber(iNum);
		if(iDeleteResult == 1)
		{
			//删除成功
			system("color 2f");//change color
			cout<<"\n		值得祝贺，删除成功后信息：\n"<<endl;
			showRecord();
		}else
		{
			//删除失败
			cout<<"\n		删除失败,系统遇到未知错误："<<endl;
		system("color cf&ping -n 1 127.1>nul&color fc&ping -n 1 127.1>nul&color cf&ping -n 1 127.1>nul&color fc&ping -n 1 127.1>nul&color cf");//change color
		}
	}else
	{
		//不存在，显示错误
		cout<<"\n		没有此条记录："<<iNum<<"不存在"<<endl;
		system("color cf&ping -n 1 127.1>nul&color fc&ping -n 1 127.1>nul&color cf&ping -n 1 127.1>nul&color fc&ping -n 1 127.1>nul&color cf");//change color
	}
	cout<<"　　--------------------------------------------------\n"<<endl;
	pause();//pause
	system("color 4e");//change color
	clearScreen();//clear screen

	home();
	
	return 1;
}

/**
	@author
	@date:2012.6.26
	@cropyright:
	@content:the sortRecord module
*/

#include "main.h"

extern int getRecordCount();
extern struct tele_record saArrayRecord[TELE_RECORD_COUNT];

int sortRecord()
{
	//选择排序
	int i;
	int j;
	struct tele_record sTemp;//交换变量的桥接变量
	clearScreen();

	cout<<"　　-------------------有秩序才是好的-----------------\n";
	
	//选择排序按照电话号码升序
	for(i = 0; i < getRecordCount(); i++)
	{
		for(j = i + 1; j < getRecordCount();j++)
		{
			if(saArrayRecord[i].number > saArrayRecord[j].number)
			{
				//交换变量
				sTemp = saArrayRecord[i];
				saArrayRecord[i] = saArrayRecord[j];
				saArrayRecord[j] = sTemp;
			}
		}
	}
	system("color 2f");//change color
	showRecord();

	pause();//pause
	system("color 4e");//change color
	clearScreen();//clear screen

	home();

	return 1;
}
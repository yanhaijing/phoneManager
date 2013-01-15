/**
	@author:
	@date:2012.6.26
	@cropyright
	@content:main header file that some structures/functions/contants needs all files
*/

#ifndef MY_MAIN
#define MY_MAIN
#define TELE_RECORD_COUNT 100//define tele record count

//include common header file
#include <iostream.h>
#include <stdlib.h>


//扩展外部函数
extern int setTitle();
extern int home();
extern int clearScreen();
extern int showRecord();
extern int pause();
extern int addRecord();
extern int deleteRecord();
extern int queryRecord();
extern int sortRecord();
extern struct myTime myTime();

struct teledate				
{
	int month;
	int day;
	int year;
};

struct teletime				
{
	int hour;
	int min;
	int second;
};

struct tele_record				//定义留言箱结构
{
	teledate t_date; 	 //定义留言日期
	teletime t_time;     //定义留言时间
	int number;          //定义电话号码
	char *event;     //定义留言内容
};

struct myTime
{
	int iYear;
	int iMonth;
	int iDate;
	int iHour;
	int iMin;
	int iSecond;
};

#endif

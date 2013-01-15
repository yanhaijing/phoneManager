#include <time.h>
#include <stdio.h> 

struct myTime
{
	int iYear;
	int iMonth;
	int iDate;
	int iHour;
	int iMin;
	int iSecond;
};

/**
	@in:
	@return:int(0|1)
	@function:return current time
*/
struct myTime myTime()
{
	struct myTime myTime;
	struct tm *local;
	time_t t;
	t = time(NULL);
	local = localtime(&t);
	myTime.iYear = local->tm_year+1900;
	myTime.iMonth = local->tm_mon+1;
	myTime.iDate = local->tm_mday;
	myTime.iHour = local->tm_hour;
	myTime.iMin = local->tm_min;
	myTime.iSecond = local->tm_sec;

	return myTime;
}
/**
	@author
	@date:2012.6.26
	@cropyright
	@content:the module module
*/
#include <iostream.h>
#include <stdlib.h>


/**
	@in:
	@return:int(0|1)
	@function:clear current cmd screen
*/
int clearScreen(){
	system("cls");//exec cls to clear the screen
	
	return 1;
}

/**
	@in:
	@return:int(0|1)
	@function:set cmd screen title
*/
int setTitle(){
	system("title 电话留言箱");///exec title to set cmd screen title

	return 1;
}

/**
	@in:
	@return:int(0|1)
	@function:set cmd screen pause
*/
int pause(){
	cout<<"\n	按任意键继续"<<endl;
	system("pause>nul");///exec pause to pause

	return 1;
}

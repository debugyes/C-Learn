/*

时间：2018年2月5日14:27:44
目的:测试一次给多个变量赋值背影

*/
#include"stdafx.h"

int main(void)
{
	int i,j;
	char ch;
	printf("请输入两个值，中间用空格隔开\n");
	scanf("%d",&i);
	printf("i = %d", i);
    while ((ch = getchar()))! = '\n'));
	printf("i = %d j = %d\n",i , j);




	return 0;
}
/*
----------------------------------------
在VC6.0中输出的结果是
如果输入：123 666
则输出i  = 123，j =666
如果只输入一个值的话，程序不会有任何反应
----------------------------------------
*/
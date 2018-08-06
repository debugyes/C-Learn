/*
时间：2018年3月15日17:43:53
目的：测试函数的返回值类型
*/
#include<stdio.h>
int f(void)//括号中的void代表不接受任何数据
{
	return 0;//向主调函数范围数值10
}

void g(void)//“g”前面的void代表函数没有返回值
{
	//return 10; //不能这样写，应为g函数没有返回值
}
int main (void)
{
	int j = 88;

	j = f();
	printf("j = %d", j);

	//j = g() //报错，因为g函数没有返回值
	return 0;
}
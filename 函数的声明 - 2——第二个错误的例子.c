/*
时间：2018年3月28日23:09:21
函数的定义一定要放在主调函数的前面
*/

#include<stdio.h>
void f(void);//如果函数的定义放在了主调函数的后面，那么在主调函数前面加一行函数的声明就行了
void g(void)
{
	f();
}
void f(void)
{
	printf("HAHA!\n");
}
int main(void)
{
	f();
	return 0;
}

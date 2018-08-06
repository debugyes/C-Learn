/*
时间：2018年4月30日23:52:36
目的：了解第十行为什么报错
*/
#include <stdio.h>
void g()
{
	printf("k = %d\n", k);
}
int k = 1000;//这是一个全局变量，既所有地方都能用
void f(void)
{
	g();

}
int main (void)
{
	f(88);

	return 0;
}
/*
要调用全局变量也必须像函数调用函数一样，被调函数必需在主调函数前面
*/
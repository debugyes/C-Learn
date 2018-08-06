/*
时间：2018年3月15日17:48:20
目的：测试函数的返回值
*/
# include<stdio.h>
int f()
{
	return 10.5;//return 返回的值只能根据 f() 前的 int,所以才会输出10.0000
}

int main (void)
{
	//int i;
	double x;

	x = f();
	printf("%lf\n", x);
	return 0;
}
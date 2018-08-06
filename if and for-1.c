/*
时间：2018年2月12日14:37:20
目的：学习for和if的嵌套使用
*/
# include<stdio.h>

int main (void)
{
	int i;
	int sum = 0;

	for (i = 3; i <= 10; ++i)
	{
		if (i%3 == 0)
		sum = sum + i;
	}
	printf("sum = %d\n", sum);

	return 0;
}
/*
在VC6.0中输出的结果是
--------------------
sum = 18
--------------------
*/
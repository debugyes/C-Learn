/*
时间：2018年2月28日21:33:30
目的:验证多层switch嵌套使用时break的用法
*/# include<stdio.h>

int main (void)
{
	int x = 1, y = 0, a = 0, b = 0;

	switch (x)
	{
	case 1:
		switch (y)
		{
		case 0:
			a++;
			break;//终止的是离它最近的循环
		case 1:
			b++;
			break;
		}
		b = 100;
		break;//终止的是第一个switch
	case 2:
		a++;
		b++;
	}
	printf("a = %d,b = %d\n", a, b);




	return 0;
}
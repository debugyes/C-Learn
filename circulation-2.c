/*
时间：2018年2月12日11:58:30
目的：求和
*/

# include<stdio.h>

int main (void)
{
	int i;
	int sum = 0;

	for (i=1; i<=10; i+=2)
	{
		sum = sum + i;
	}
	
	printf("i = %d\n", i);
	printf("sum = %d\n", sum);


	return 0;
}
/*
在VC6.0中输出的结果是
---------------------
i = 11
sum = 25
---------------------
*/
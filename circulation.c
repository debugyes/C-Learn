/*
时间：2018年2月12日00:15:38
目的：使用循环for
*/

# include<stdio.h>

int main (void)
{
	int i;
	int sum = 0;
	
	for (i = 1 ; i <= 4 ; ++i)
		sum = sum + i;

	printf("sum = %d\n", sum);



	return 0;
}
/*
在VC6.0中输出的结果是
---------------------
sum = 10
---------------------
*/
/*
时间：2018年2月14日18:33:53
目的：求1到100之间的基数之和
*/
*/# include<stdio.h>

int main (void)
{
	int i;
	int sum = 0;

	for (i = 1; i <101; ++i)
	{
		if(i%2 == 1)
			sum +=i;
	
	}
	printf("sum = %d\n", sum);



	return 0;
}
/*
在VC6.0中输出的结果是
---------------------
sum = 5200
---------------------
*/
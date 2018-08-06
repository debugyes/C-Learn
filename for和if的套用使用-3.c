
/*
时间:2018年2月15日11:20:26
目的：求1-100之间的奇数之和和1-100之间的偶数之和
*/# include<stdio.h>

int main(void)
{
	int i;
	int sum1 = 0;//奇数和
	int sum2 = 0;//偶数和

	for (i = 1; i<101; ++i)
	{
		if (i%2 == 1)
		{             //这里的两个{}很重要 
			sum1 +=i;
		}
		else 
		{
			sum2 +=i;
		}
	}

	printf("奇数和 = %d\n", sum1);
	printf("偶数和 = %d\n", sum2);

	return 0;
}
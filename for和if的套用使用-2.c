/*
时间：2018年2月14日23:21:02
目的；求1到100之间奇数的个数和平均值
*/
# include<stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int cnt = 0;
	float avg;

	for (i = 1; i<101; ++i)
	{
		if (i%2 == 1)
		{             //这里的两个{}很重要 
			sum +=i;
			++cnt;
		}
	}
    avg = 1.0*sum / cnt;

	printf("sum = %d\n", sum);
	printf("cnt = %d\n", cnt);
    printf("avg = %f\n", avg);//这里注意是%d

	return 0;
}
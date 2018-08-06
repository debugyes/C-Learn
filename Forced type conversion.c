/*
时间：2018年2月12日23:22:42

*/
# include<stdio.h>

int main(void)
{
	int i;
	float sum = 0;

	for (i = 1; i <= 100; ++i)
	{
		sum = sum + 1.0/i;//推荐；sum = sum + 1/(float)(i)，这样写也行，但不推荐
	}
	printf("sum = %f\n", sum);


	return 0;
}

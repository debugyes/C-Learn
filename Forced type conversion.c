/*
ʱ�䣺2018��2��12��23:22:42

*/
# include<stdio.h>

int main(void)
{
	int i;
	float sum = 0;

	for (i = 1; i <= 100; ++i)
	{
		sum = sum + 1.0/i;//�Ƽ���sum = sum + 1/(float)(i)������дҲ�У������Ƽ�
	}
	printf("sum = %f\n", sum);


	return 0;
}

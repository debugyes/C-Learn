/*
ʱ�䣺2018��2��12��14:37:20
Ŀ�ģ�ѧϰfor��if��Ƕ��ʹ��
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
��VC6.0������Ľ����
--------------------
sum = 18
--------------------
*/
/*
ʱ�䣺2018��2��12��11:58:30
Ŀ�ģ����
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
��VC6.0������Ľ����
---------------------
i = 11
sum = 25
---------------------
*/
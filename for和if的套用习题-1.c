/*
ʱ�䣺2018��2��14��18:33:53
Ŀ�ģ���1��100֮��Ļ���֮��
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
��VC6.0������Ľ����
---------------------
sum = 5200
---------------------
*/
/*
ʱ�䣺2018��2��28��21:33:30
Ŀ��:��֤���switchǶ��ʹ��ʱbreak���÷�
*/# include<stdio.h>

int main (void)
{
	int x = 1, y = 0, a = 0, b = 0;

	switch (x)
	{
	case 1:
		switch (y)
		{
		case 0:
			a++;
			break;//��ֹ�������������ѭ��
		case 1:
			b++;
			break;
		}
		b = 100;
		break;//��ֹ���ǵ�һ��switch
	case 2:
		a++;
		b++;
	}
	printf("a = %d,b = %d\n", a, b);




	return 0;
}
#include<stdio.h>
//max�Ǻ�������i��j���βΣ���ʽ��������void��ʾ����û�з���ֵ
void max(int i, int j)//��߲��ܼӣ�
{
	if (i > j)
	{
		printf("%d\n", i);
	}
	else
	{
		printf("%d\n", j);
	}
}

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;

	a = 1;
	b = 2;
	c = 3;
	d = 4;
	e = 5;
	f = 6;

	max(a, b);
	max(c, d);
	max(e, f);



	return 0;
}
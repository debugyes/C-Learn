/*
ʱ�䣺2018��3��15��17:48:20
Ŀ�ģ����Ժ����ķ���ֵ
*/
# include<stdio.h>
int f()
{
	return 10.5;//return ���ص�ֵֻ�ܸ��� f() ǰ�� int,���ԲŻ����10.0000
}

int main (void)
{
	//int i;
	double x;

	x = f();
	printf("%lf\n", x);
	return 0;
}
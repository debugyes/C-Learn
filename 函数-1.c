#include<stdio.h>
//max是函数名，i和j是形参（形式参数），void表示函数没有返回值
void max(int i, int j)//后边不能加；
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
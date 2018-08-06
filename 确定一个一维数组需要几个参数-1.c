#include<stdio.h>
void f(int * pArr, int len)
{
	int i;
	for (i = 0; i < len; ++i)
	{
		printf("%d   ", *(pArr + i));
	}
}
int main(void)
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int b[6] = { -1, -2, -3, -4, -5, -6 };
	int c[100] = { 1, 99, 22, 33 };

	f(a, 5);//函数的名字就代表了这个数组第一个元素的地址
	f(b, 6);
	f(c, 100);
	return 0;
}
include<stdio.h>

int main(void)
{
	int i = 5;
	int j = 10;
	int * p = &i;
	int * q = &j;
	//q - p没有意义，因为这两个不是一个空间里的值

	int a[5];
	p = &a[1];
	q = &a[4];
	printf("p、q所指向的单元相隔%d个单元\d", q - p);

	return 0;
}
#include<stdio.h>

int main(void)
{
	int * p;
	int * q;
	int a[5];
	p = &a[1];
	q = &a[4];
	printf("p��q��ָ��ĵ�Ԫ���%d����Ԫ\n", q-p);

	return 0;
}
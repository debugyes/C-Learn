#include<stdio.h>
void f(int **q)
{
	*q = (int *)malloc(sizeof(int));//q��������p�ĵ�ַ������*q�ʹ�����p��**q������*p
	                                              //��sizeof�Գ��Ƚ��Ͻ�����Ϊ
	**q = 5;
}
int main(void)
{
	int *p;
	f(&p);
	printf("%d\n", *p);
	return 0;
}
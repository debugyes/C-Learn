#include<stdio.h>
#include<malloc.h>
void f(int * q)
{
	//*p = 200�� error *p��*q�������ֲ����������ܻ���
	//q = 200��error q�Ǹ�ָ�룬û�취��һ����������һ��ָ�����
	*q = 200;
	//**p = 200; error ֻҪp����ָ�������ǰ�涼���ܼ�*
	//free(p); ��������ע�͵��� ��Ȼ17�л����
	return;
}
int main(void)
{
	int * p = (int *)malloc(sizeof(int));
	*p = 10;
	printf("%d\n", *p); //10
	f(p);
	printf("%d\n", *p);//17��
	return 0;
}
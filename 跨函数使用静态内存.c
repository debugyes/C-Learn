#include<stdio.h>
void f (int **q)
{
	int i = 5;
	//*q�ȼ���p����q��**q�����ȼ���p
	//*q=i error ��Ϊ*q=i�ȼ���p=i
	*q = &i;
	return;
}
int main(void)
{
	int *p;

	f(&p);

	printf("%d\n", *p);//����д�﷨��û�����⣬���߼��������⣬��Ϊ��f���������Ժ�i�Ŀռ�ͱ��ͷŵ��ˣ���������ռ��ʹ��Ȩ�޲���������������Բ��ܶ�д
	return 0;
}
# include<stdio.h>

void huhuan_2(int * p, int * q)
{
	int  t;//���Ҫ����*p��*q��ֵ����t���趨���int�����ܶ����int *
	t = *p;  //p ��int *��*p�� int
	*p = *q;
	*q = t;
	//Ҫ��ı�main�����б�����ֵ�ͱ���ѵ�ַ�ӹ���
}
int main(void)
{
	int a = 3;
	int b = 5;

	huhuan_2(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
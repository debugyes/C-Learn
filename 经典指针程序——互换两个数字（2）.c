# include<stdio.h>
//������ɻ�������
void huhuan_2(int * p , int * q)
{
	int * t;//���Ҫ����p��q��ֵ����t������int*��������int
	t = p;
	p = q;
	q = t;  
	//����ֻ�ǻ�����p��q���������е����ݡ�����������a��b�ĵ�ַû���κ�Ӱ�죬��Ϊa��b�ĵ�ַ���������ж���ʱ���ǵĵ�ַ���Ƕ����ģ��������ٸı�
}
int main(void)
{
	int a = 3;
	int b = 5;

	huhuan_2(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
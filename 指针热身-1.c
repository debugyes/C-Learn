# include<stdio.h>

int mian(void)
{
	int * p;//P�Ǳ��������֣�int*��ʾp������ŵ���int���ͱ����ĵ�ַ
	int i = 3;

	p = &i; //OK
	//p = i; //error, ��Ϊ���Ͳ�һ�£�pֻ�ܴ��int���ͱ����ĵ�ַ�����ܴ��int���ͱ�����ֵ
	//p = 55; //error,55Ҳ�Ǹ�������pֻ�ܴ��int���ͱ����ĵ�ַ

	return 0;
}
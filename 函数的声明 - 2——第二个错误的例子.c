/*
ʱ�䣺2018��3��28��23:09:21
�����Ķ���һ��Ҫ��������������ǰ��
*/

#include<stdio.h>
void f(void);//��������Ķ�����������������ĺ��棬��ô����������ǰ���һ�к���������������
void g(void)
{
	f();
}
void f(void)
{
	printf("HAHA!\n");
}
int main(void)
{
	f();
	return 0;
}

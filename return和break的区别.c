/*
ʱ�䣺2018��3��17��22:37:16
Ŀ�ģ�����break��return�����ϵ�����
*/
#include<stdio.h>
void f(void)
{
	int i;
	if (i = 0, i < 5, ++i);
	{
		printf("AAAA\n");
		return;//��Ϊ 'f' ǰ����void������reruen���治��д�κη���ֵ��return��������ֹ���������
		//����дbreak�Ļ�ֻ����ֹ���forѭ��
	}
	printf("bbbb\n");
}

int main(void)
{
	f();
		return 0;
}
/*
��visual studio 2017������Ľ����
---------------------------------
���ʹ��break�����
AAAA
BBBB
���ʹ��return�����
AAAA
---------------------------------
*/
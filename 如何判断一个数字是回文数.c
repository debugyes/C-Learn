/*
ʱ�䣺2018��2��21��12:17:44
Ŀ�ģ���whileѭ�����ж�һ�����Ƿ��ǻ����� 
*/
# include<stdio.h>

int main (void)
{
	int val;//��Ŵ��жϵ�����
    int m;
	int sum = 0;

	printf("��������������\n");
	scanf("%d", &val);

	m = val;
	while (m)
	{
		sum = sum * 10 + m%10;
		m /=10;
	}

	if (sum == val)
	{
		printf("YES!\n");
	}
	else
	{
		printf("NO!\n");
	}

	return 0;
}
/*
������
1>   m = 1234 ����
     sum = 0 * 10+1234%10 = 4
	 m = m/10 = 123;
2>   m = 123  ����
     sum = 4 * 10 + 123%10 = 43
	 m = 123 /10 = 12
3>   m = 12   ����
     sum = 43 * 10 + 12%10 = 432
	 m = 12/10 = 1
4>   m = 1    ����
     sum = 432 * 10 + 1%10 = 432
	 m = m%10 = 0
5>   m = 0    ������
*/ 
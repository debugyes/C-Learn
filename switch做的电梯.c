/*
ʱ�䣺2018��2��26��20:50:18
Ŀ�ģ�������switch��������
*/
# include<stdio.h>

int main (void)
{
	int val;

	printf("���������뵽��¥����\n");
	scanf("%d", &val);

	switch (val)
	{
	case 1:
		printf("1�㿪��\n");
		break;//һ��Ҫ��break
	case 2:
		printf("2�㿪��\n");
		break;
	case 3:
		printf("3�㿪��\n");
		break;
	default:
		printf("û�иĵ���һ�㣡\n");
        break;

	}
	return 0;
}
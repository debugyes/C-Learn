/*
ʱ�䣺2018��2��9��17:11:01
Ŀ�ģ���һ�����۳ɼ������
*/

# include<stdio.h>

int main (void)
{
	float score;

	printf("���������ĳɼ�:\n");
	scanf("%f", &score);

	if (score > 100)
		printf("����������ǣ������ǻ�������ͷ\n");
    else if (score >= 90 && score <= 100)
	    printf("����������ǣ�����\n");
	else if (score >= 80 && score < 90)
		printf("����������ǣ�����\n");
	else if (score >= 70 && score < 80)
		printf("����������ǣ�һ��\n");
	else if (score >= 60 && score < 70)
		printf("����������ǣ�����\n");
	else 
		printf("����������ǣ�������\n");


	return 0;
}
/*
��VC6.0������Ľ����
-------------------------
������� 60
�����   ����
-------------------------
*/
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct student
{
	char name[100];
	int age;
	float score;
};


void student_numer(int *p)
{
	printf("������ѧ���ĸ�����");
	scanf_s("%d", &*p);
	return;
}
//����
void spt(int st_number,  struct student **pArr)
{
	int i;
	for (i = 0; i < st_number; ++i)
	{
		printf("�������%d��ѧ����Ϣ��\n", i + 1);
		printf("������");
		getchar();
		gets(pArr[i]->name);
		printf("���䣺");
		scanf_s("%d", pArr[i]->age);
		printf("�ɼ���");
		scanf_s("%f", pArr[i]->score);
		return;
	}
}
//����
void arr(int *len, struct student **r)
{
	int i;
	int j;
	struct student **t;
	for (i = 0; i < *len - 1; ++i)
	{
		for (j = 0; j < *len - 1 - i; ++j)
		{
			if (r[j]->score > r[j + 1]->score)
			{
				t = r[j];
				r[j] = r[j + 1];
				r[j + 1] = t;
			}
		}
	}
	return;
}
//���
void out(int *len, struct student **pr)
{
	int i;
	for (i = 0; i < *len; ++i)
	{
		printf("��%d��ѧ������Ϣ�ǣ�", i + 1);
		printf("������%s\n", pr[i]->name);
		printf("���䣺%d\n", pr[i]->age);
		printf("������%.2f\n", pr[i]->score);
	}
}

int main(void)
{
	int len = 0;
	struct student *pArr;
	pArr = (struct student*)malloc(len * sizeof(struct student));

	student_numer(&len);     //���ú�������ѧ���ĸ���
	spt(len, pArr);                        //���ú�������ѧ����Ϣ
	arr(&len, pArr);              //��ѧ���ĳɼ�����
	out(&len, pArr);            //���ú������ѧ����Ϣ
	return 0;
}
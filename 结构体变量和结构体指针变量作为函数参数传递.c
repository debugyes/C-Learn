#include<stdio.h>
#include<string.h>

void inputstudent(struct student *pst);
void outputstudent(struct student *ss);

struct student
{
	char name[100];
	int age;
	float score;
};

int main(void)
{
	struct student st;
	inputstudent(&st);
	outputstudent(&st);

	return 0;
}

void outputstudent(struct student *ss)//������ָ������Ϊָ����õ��ڴ�С���ٶȿ�                                                        
{
	printf("name:%s age:%d score:%f\n", ss->name, ss->age, ss->score);
}

void inputstudent(struct student *pst)
{
	strcpy_s(pst->name, "����");
	(*pst).age = 10;
	(*pst).score = 66;
	return;
}
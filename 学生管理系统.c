#include<stdio.h>
#include<malloc.h>

struct student
{
	int age;
	float score;
	char name[100];
};

int main(void)
{
	int len;
	struct student *pArr;
	int i;
	int j;
	struct student t;
	printf("请输入学生个数：\n");
	printf("len = ");
	scanf_s("%d", &len);

	pArr = (struct student *)malloc(len * sizeof(struct student));
	getchar();
	for (i = 0; i < len; ++i)
	{
		printf("请输入第%d个学生的信息\n", i + 1);
		printf("name = ");
		gets(pArr[i].name);
		printf("age = ");
		scanf_s("%d", &pArr[i].age);
		printf("score = ");
		scanf_s("%f", &pArr[i].score);
		getchar();
	}
	for (i = 0; i < len - 1; ++i)
	{
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (pArr[j].score > pArr[j + 1].score)
			{
				t = pArr[j];
				pArr[j] = pArr[j + 1];
				pArr[j + 1] = t;
			}
		}
	}
	for (i = 0; i < len; ++i)
	{
		printf("第%d个学生的信息是\n", i + 1);
		printf("name = %s\n", pArr[i].name);
		printf("age = %d\n", pArr[i].age);
		printf("score = %.1f\n", pArr[i].score);

		printf("\n");
	}

	return 0;
}
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
	printf("请输入学生的个数：");
	scanf_s("%d", &*p);
	return;
}
//输入
void spt(int st_number,  struct student **pArr)
{
	int i;
	for (i = 0; i < st_number; ++i)
	{
		printf("请输入第%d个学生信息：\n", i + 1);
		printf("姓名：");
		getchar();
		gets(pArr[i]->name);
		printf("年龄：");
		scanf_s("%d", pArr[i]->age);
		printf("成绩：");
		scanf_s("%f", pArr[i]->score);
		return;
	}
}
//排序
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
//输出
void out(int *len, struct student **pr)
{
	int i;
	for (i = 0; i < *len; ++i)
	{
		printf("第%d个学生的信息是：", i + 1);
		printf("姓名：%s\n", pr[i]->name);
		printf("年龄：%d\n", pr[i]->age);
		printf("分数：%.2f\n", pr[i]->score);
	}
}

int main(void)
{
	int len = 0;
	struct student *pArr;
	pArr = (struct student*)malloc(len * sizeof(struct student));

	student_numer(&len);     //调用函数输入学生的个数
	spt(len, pArr);                        //调用函数输入学生信息
	arr(&len, pArr);              //给学生的成绩排序
	out(&len, pArr);            //调用函数输出学生信息
	return 0;
}
#include<stdio.h>
//第一种方式
struct student
{
	int age;
	float score;
	char sex;
};
//第二种方式
struct student2
{
	int age;
	float score;
	char sex;
} st2;//这里直接定义了变量名，不推荐使用，因为没办法再使用第二次
//第三种方式
struct
{
	int age;
	float score;
	char sex;
} st3;//不推荐使用
int main(void)
{
	return 0;
}
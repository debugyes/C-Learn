#include<stdio.h>
struct student
{
	int age;
	float score;
	char sex;
};
int main(void)
{
	struct student st = { 20, 66.6, 'F' };
	printf("%d %f %c\n", st.age, st.score, st.sex);

	struct student st2;
	st2.age = 20;
	st2.score = 66.6;
	st2.sex = 'F';
	printf("%d %f %c\n", st2.age, st2.score, st2.sex);

	return 0;
}
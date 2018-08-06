#include<stdio.h>
struct student//这只是定义了新的数据类型没有定义变量
{
	int age;
	float score;
	char sex;
};
int main(void)
{
	struct student st = { 20, 66.6F, 'f' };
	//第一种提出方式
	//为了看得更清晰这里三个成员的提出分开来写
	printf("第一种方式\n");
	printf("age:%d ", st.age);
	printf("score:%f ", st.score);
	printf("sex:%c\n", st.sex);


	printf("第二种方式\n");
	struct student *pst = &st;//定义一个指针用来存储结构体变量的地址
	                                         //这里不能写成 pst
	/*赋值方面：
	pst->score = 等价于st.score = 
	*/
	printf("age:%d ", pst->age);//等价于printf("age:%d", （*pst）.age);
	printf("score:%f ", pst->score);
	printf("sex:%c\n ", pst->sex);
	return 0;
}
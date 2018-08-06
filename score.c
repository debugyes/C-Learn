/*
时间：2018年2月9日17:11:01
目的：做一个评价成绩的软件
*/

# include<stdio.h>

int main (void)
{
	float score;

	printf("请输入您的成绩:\n");
	scanf("%f", &score);

	if (score > 100)
		printf("给你的评价是：你怕是活在梦里头\n");
    else if (score >= 90 && score <= 100)
	    printf("给你的评价是：优秀\n");
	else if (score >= 80 && score < 90)
		printf("给你的评价是：良好\n");
	else if (score >= 70 && score < 80)
		printf("给你的评价是：一般\n");
	else if (score >= 60 && score < 70)
		printf("给你的评价是：及格\n");
	else 
		printf("给你的评价是：不及格\n");


	return 0;
}
/*
在VC6.0中输出的结果是
-------------------------
如果输入 60
则输出   及格
-------------------------
*/
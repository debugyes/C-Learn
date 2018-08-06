/*
时间：2018年2月9日12:26:31
目的：测试if elseif 

*/

# include<stdio.h>

int main(void)
{
	double delta = 5;

	if (delta > 0)
		printf("有两个解\n");
	else if (delta == 0)
	    printf("有一个解\n");
	else//else后面不能加表达式
		printf("无解\n");
	    




	return 0;
}
/*
在VC6.0中输出的结果是
-----------------------
有两个解
-----------------------
*/
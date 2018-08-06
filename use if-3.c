/*
时间：2018年2月8日19:43:51
目的：测试怎么用一个if控制两个语句
*/
# include <stdio.h>

int main(void)
{
	if (3>2)
	{
		printf("AAAA\n");
		printf("BBBB\n");
	}


	return 0;
}
/*
在VC6.0中输出的结果是
---------------------
AAAA
BBBB
---------------------
总结：要想用一个if控制多个语句的话，就一定要用{}括起来
*/
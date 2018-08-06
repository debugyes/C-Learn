/*
时间：2018年2月28日20:38:09
目的：测试break用于多个for嵌套使用
*/

# include<stdio.h>

int main (void)
{
	int i, j;

	for (i = 0; i < 3; ++i)
	{
		for (j = 1;j < 4; ++j)
			break;//break只能终止离它最近的循环
		printf("AAAA\n");
	}






	return 0;
}
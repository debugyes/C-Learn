/*时间：2018年2月8日18:57:45
目的：测试if的简单用法
*/
# include <stdio.h>

int main(void)
{
	if (3>2)
		printf("AAAA\n");
    if (0 == 0)
		printf("BBBB\n");
	if (0)
		printf("CCCC\n");
	return 0;
}
/*
在VC6.0中输出的结果是
---------------------------
AAAA
BBBB
---------------------------
*/
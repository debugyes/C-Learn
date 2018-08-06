/*时间：2018年2月8日19:03:38
目的：测试if的范围
*/
# include <stdio.h>

int main(void)
{
	if (2>1)
		printf("AAAA\n");
        printf("BBBB\n");

	return 0;
}
/*
在VC6.0中输出的结果是
----------------------
AAAA
BBBB
----------------------
*/


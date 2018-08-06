/*
时间：2018年2月4日11:44:09
目的：测试printf

*/
# include <stdio.h>

int main (void)
{
	int i = 64;
	printf("%x\n",i);// 输出结果是：40
    printf("%X\n",i);// 输出结果是：40
	printf("%#x\n",i);// 输出结果是：0x40
	printf("%#X\n",i);// 输出结果是：0X40 推荐使用

	return 0;

}

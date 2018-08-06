/*
时间：2018年5月12日11:25:59
要理解为什么这个程序会报错
*/
#include<stdio.h>

int main(void)
{
	int *p;
	int i = 5;

	*p = i;//这里*p没有赋值，也就是说现在*p指向了一个未知的变量，接着又把i赋给了*p，相当于把一个位置变量的值给改了
	printf("%d\n", *p);
	return 0;
}
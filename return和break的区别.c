/*
时间：2018年3月17日22:37:16
目的：分清break和return作用上的区别
*/
#include<stdio.h>
void f(void)
{
	int i;
	if (i = 0, i < 5, ++i);
	{
		printf("AAAA\n");
		return;//因为 'f' 前面是void，所以reruen后面不能写任何返回值，return是用来终止这个函数的
		//这里写break的话只能终止这个for循环
	}
	printf("bbbb\n");
}

int main(void)
{
	f();
		return 0;
}
/*
在visual studio 2017中输出的结果是
---------------------------------
如果使用break输出：
AAAA
BBBB
如果使用return输出：
AAAA
---------------------------------
*/
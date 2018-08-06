#include<stdio.h>

int main(void)
{
	int i = 5;
	int * p;
	int * q;

	p = &i;
	//*q = p;       //有语法错误，*p是 int 类型， 而 p 是 int*类型，两个不同的类型变量不能相互赋值
	//*q = *p;     //error
	p = q;          //q是垃圾值，把q赋值给p；p也变成了垃圾值
	printf("%d\n", *q);
	/*
	q的空间是属于本程序的，所以本程序可以读写q的内容，但是如果q内部是垃圾值，则本程序不能读写*q的内容，因为*q所代表的内存单元的控制权限并没有分配给本程序
	*/
	return 0;
}
#include<stdio.h>
#include<malloc.h>
void f(int * q)
{
	//*p = 200； error *p和*q是两个局部变量，不能互改
	//q = 200；error q是个指针，没办法把一个整数赋给一个指针变量
	*q = 200;
	//**p = 200; error 只要p不是指针变量，前面都不能加*
	//free(p); 本语句必须注释掉， 不然17行会出错
	return;
}
int main(void)
{
	int * p = (int *)malloc(sizeof(int));
	*p = 10;
	printf("%d\n", *p); //10
	f(p);
	printf("%d\n", *p);//17行
	return 0;
}
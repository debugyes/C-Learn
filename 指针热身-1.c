# include<stdio.h>

int mian(void)
{
	int * p;//P是变量的名字，int*表示p变量存放的是int类型变量的地址
	int i = 3;

	p = &i; //OK
	//p = i; //error, 因为类型不一致，p只能存放int类型变量的地址，不能存放int类型变量的值
	//p = 55; //error,55也是个整数，p只能存放int类型变量的地址

	return 0;
}
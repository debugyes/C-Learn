# include<stdio.h>

void huhuan_2(int * p, int * q)
{
	int  t;//如果要互换*p、*q的值，则t必需定义成int，不能定义成int *
	t = *p;  //p 是int *，*p是 int
	*p = *q;
	*q = t;
	//要想改变main函数中变量的值就必须把地址接过来
}
int main(void)
{
	int a = 3;
	int b = 5;

	huhuan_2(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
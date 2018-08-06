#include<stdio.h>

int main(void)
{
	int a[5];//a是数组名，5是数组元素的个数，元素就是变量
	//int a [i][j]就是i+1行j+1列
	//a = b error,a 是数组名，所以他是常量，常量就是一个固定的值，所以无法被赋值
	int b[5];
	printf("%#x\n", &a[0]);
	printf("%#x\n", a);


	return 0;
}
//结果一样，证明一维数组名里存的就是第一个元素的地址
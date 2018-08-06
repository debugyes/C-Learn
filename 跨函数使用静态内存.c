#include<stdio.h>
void f (int **q)
{
	int i = 5;
	//*q等价于p，但q和**q都不等价于p
	//*q=i error 因为*q=i等价于p=i
	*q = &i;
	return;
}
int main(void)
{
	int *p;

	f(&p);

	printf("%d\n", *p);//这样写语法上没有问题，但逻辑上有问题，因为在f函数结束以后，i的空间就被释放掉了，所以这个空间的使用权限不属于这个程序，所以不能读写
	return 0;
}
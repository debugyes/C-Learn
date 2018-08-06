#include<stdio.h>
void f(int **q)
{
	*q = (int *)malloc(sizeof(int));//q里面存的是p的地址，所以*q就代表了p，**q代表了*p
	                                              //用sizeof显出比较严谨，因为
	**q = 5;
}
int main(void)
{
	int *p;
	f(&p);
	printf("%d\n", *p);
	return 0;
}
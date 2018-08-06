#include<stdio.h>
void  f (int **q)
{ 
	**q = 100;
	return;
}
void g(void)
{
	int i = 10;
	int *p = &i;

	printf("第一次%d\n", *p);
	f(&p);

	printf("第二次%d\n", *p);
}
int main(void)
{
	g();

	return 0;
}
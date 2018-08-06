#include<stdio.h>
int main(void)
{
	int i = 10;
	int * p = &i;
	int **q = &p;
	int ***r = &q;

	printf("%d\n", ***r);
	return 0;
}
#include<stdio.h>
bool IsPrime<>
int main(void)
{
	int val;
	int i;

	scanf_s("%d", &val);
	for (i = 2; i < val; ++i)
	{
		if (0 == val % i)
			break;
	}
	if (i == val)
		printf("yes\n");
	else
	{
		printf("no\n");
	}

	return 0;
}
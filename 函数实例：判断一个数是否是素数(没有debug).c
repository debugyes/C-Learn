#include<stdio.h>
#include <windows.h>
bool IsPrime(int val)
{
	int i;
	for (i = 2, i < val, ++i)
	{
		if (val%i == 0)
			break;
	}
	if (i == val)
		return true;
	else
		return false;
}


int mian(void)
{
	int m;

	scanf_s("%d", &m);
	
	if (IsPrime(m))
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
		



	return 0;
}
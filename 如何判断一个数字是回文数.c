/*
时间：2018年2月21日12:17:44
目的：用while循环来判断一个数是否是回文数 
*/
# include<stdio.h>

int main (void)
{
	int val;//存放待判断的数字
    int m;
	int sum = 0;

	printf("请输入您的数字\n");
	scanf("%d", &val);

	m = val;
	while (m)
	{
		sum = sum * 10 + m%10;
		m /=10;
	}

	if (sum == val)
	{
		printf("YES!\n");
	}
	else
	{
		printf("NO!\n");
	}

	return 0;
}
/*
试数；
1>   m = 1234 成立
     sum = 0 * 10+1234%10 = 4
	 m = m/10 = 123;
2>   m = 123  成立
     sum = 4 * 10 + 123%10 = 43
	 m = 123 /10 = 12
3>   m = 12   成立
     sum = 43 * 10 + 12%10 = 432
	 m = 12/10 = 1
4>   m = 1    成立
     sum = 432 * 10 + 1%10 = 432
	 m = m%10 = 0
5>   m = 0    不成立
*/ 
/*
时间：2018年2月10日15:07:18
目的；排序
*/

# include<stdio.h>

int main (void)
{
	int a, b, c, t;
	printf("输入三个值，中间用空格分开：");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a<b)//这里只需要写if不需要写else是因为如歌a>b就不需要换位
	{
		t = a;
		a = b;
		b = t;
	}

	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}

	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}

	printf("%d %d %d\n", a, b, c);
	return 0;
}
/*
在VC6.0中输出的结果是
----------------------
如果输入的是：64 23 68
则会输出：    68 64 23
----------------------
*/
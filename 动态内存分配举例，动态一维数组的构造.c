#include<stdio.h>
#include<malloc.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	int len;
	int * pArr;
	int i;

	//动态地构造一个一维数组
	printf("请输入您要存放元素的个数\n");
	scanf_s("%d", &len);
	pArr = (int*)malloc(4 * len);

	//对一维数组进行操作，如对一维数组赋值
	for (i = 0; i < len; ++i)
	{
		scanf_s("%d", &pArr[i]);
	}
	//对动态构造的一维数组进行输出
	printf("静态构造的一维数组是：");
	for ( i = 0; i < 5; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	//对一维数组进行输出：假设都是存放1， 2，3，4 ，5
	printf("动态构造一维数组的内容是：");
	for (i = 0; i < len; ++i)
	{
		printf("%d ", pArr[i]);
	}
	printf("\n");                                                             /*
																			                结论：静态和动态构造的数组用户（外部）使用起来是一样的，但内部的构造方式却是不同的
																				 */
	printf("再扩充4个字节");                            //使用一个realloc函数来扩充字节数，如果扩充的字节比原来的字节数多，那么原来的数据不会丢失，但如果扩充的字节数比原来的字节数少，那么数据就会丢失
	pArr = (int *)malloc(pArr, 24);
	for (i = 0; i < 6; ++i)
	{
		scanf_s("%d", &pArr[i]);
	}

	for ( i = 0; i < 6; ++i)
	{
		printf("%d ", pArr[i]);
	}
	return 0;
}
/*
时间：2018年2月9日11:19:25
目的：测试if...else的用法
*/

# include<stdio.h>

int main(void)
{
	int i, j;
    
	printf("请输入两个值(格式为：i =  j = )\n");
	scanf("i = %d j = %d", &i, &j);
	if (i > j)
		printf("i大于j\n");
	else//否则
	    printf("i小于j\n");



	return 0;
}
/*
在VC6.0中输出的结果是
------------------------
如果输入  i = 64 j = 32
那么输出  i大于j
------------------------
*/

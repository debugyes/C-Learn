/*
时间：2018年2月27日22:45:29
目的：使用break
*/
# include<stdio.h>

int main (void)
{
	int i;

	switch (2)
	{
	case 2:	
		printf("hhh\n");
		break;
	}
/*
    if (3 > 2)
	    break;
	这样写不对，因为break不能直接运用于if，除非是for循环内部的语句

*/
	for (i = 0 ; i < 3 ; ++i)
	{
		if (3 > 2)
			break;
		printf("haha\n");//这样写haha一次都不会输出，因为break是用于终止for这个循环的
	}


	return 0;
}
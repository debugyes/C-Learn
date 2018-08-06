/*
时间：2018年2月26日20:50:18
目的：测试用switch做出电梯
*/
# include<stdio.h>

int main (void)
{
	int val;

	printf("请输入您想到的楼层数\n");
	scanf("%d", &val);

	switch (val)
	{
	case 1:
		printf("1层开！\n");
		break;//一定要加break
	case 2:
		printf("2层开！\n");
		break;
	case 3:
		printf("3层开！\n");
		break;
	default:
		printf("没有改到这一层！\n");
        break;

	}
	return 0;
}
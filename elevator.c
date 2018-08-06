# include<stdio.h>
# include<math.h>
int main (void)
{
	int val;
	int ch;
	do
	{
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
		printf("您想继续吗？(Y\n)\n");
	    scanf(" %c", ch);
	}while ('y' == ch || 'Y' == ch);
	return 0;
	
}
# include<stdio.h>
# include<math.h>
int main (void)
{
	int val;
	int ch;
	do
	{
		printf("���������뵽��¥����\n");
		scanf("%d", &val);
		
		switch (val)
		{
		case 1:
			printf("1�㿪��\n");
			break;//һ��Ҫ��break
		case 2:
			printf("2�㿪��\n");
			break;
			
		case 3:
			printf("3�㿪��\n");
			break;
		default:
			printf("û�иĵ���һ�㣡\n");
			break;
			
			
		}
		printf("���������(Y\n)\n");
	    scanf(" %c", ch);
	}while ('y' == ch || 'Y' == ch);
	return 0;
	
}
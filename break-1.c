/*
ʱ�䣺2018��2��27��22:45:29
Ŀ�ģ�ʹ��break
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
	����д���ԣ���Ϊbreak����ֱ��������if��������forѭ���ڲ������

*/
	for (i = 0 ; i < 3 ; ++i)
	{
		if (3 > 2)
			break;
		printf("haha\n");//����дhahaһ�ζ������������Ϊbreak��������ֹfor���ѭ����
	}


	return 0;
}
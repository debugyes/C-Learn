#include<stdio.h>
#include<malloc.h>

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	int len;
	int * pArr;
	int i;

	//��̬�ع���һ��һά����
	printf("��������Ҫ���Ԫ�صĸ���\n");
	scanf_s("%d", &len);
	pArr = (int*)malloc(4 * len);

	//��һά������в��������һά���鸳ֵ
	for (i = 0; i < len; ++i)
	{
		scanf_s("%d", &pArr[i]);
	}
	//�Զ�̬�����һά����������
	printf("��̬�����һά�����ǣ�");
	for ( i = 0; i < 5; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	//��һά���������������趼�Ǵ��1�� 2��3��4 ��5
	printf("��̬����һά����������ǣ�");
	for (i = 0; i < len; ++i)
	{
		printf("%d ", pArr[i]);
	}
	printf("\n");                                                             /*
																			                ���ۣ���̬�Ͷ�̬����������û����ⲿ��ʹ��������һ���ģ����ڲ��Ĺ��췽ʽȴ�ǲ�ͬ��
																				 */
	printf("������4���ֽ�");                            //ʹ��һ��realloc�����������ֽ��������������ֽڱ�ԭ�����ֽ����࣬��ôԭ�������ݲ��ᶪʧ�������������ֽ�����ԭ�����ֽ����٣���ô���ݾͻᶪʧ
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
# include<stdio.h>
void huhuan_1(int a, int b)//�������������ɻ����Ĺ���
{
	int t = 0;
	a = t;//�����a������huhuan1�еľֲ�����������������a��b����ͻ
	t = b;//bҲͬ��
	b = t;
	//Ҳ����˵�����������a��b�е���ֵ�����������������a��b�����κ�Ӱ��
}
int main(void)
{
	int a = 3;//�����a���������еľֲ���������huhuan1�е�a��bû�й�ϵ
	int b = 5;

	huhuan_1(a, b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
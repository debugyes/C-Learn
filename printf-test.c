/*
ʱ�䣺2018��2��4��11:44:09
Ŀ�ģ�����printf

*/
# include <stdio.h>

int main (void)
{
	int i = 64;
	printf("%x\n",i);// �������ǣ�40
    printf("%X\n",i);// �������ǣ�40
	printf("%#x\n",i);// �������ǣ�0x40
	printf("%#X\n",i);// �������ǣ�0X40 �Ƽ�ʹ��

	return 0;

}

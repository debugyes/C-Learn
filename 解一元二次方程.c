#include<stdio.h>
#include<math.h>

int main(void)
{
	double x1, x2;
	double delta;
	double a, b, c;
	char ch;

	do
	{
		printf("���Ԫһ�η���\n");
		printf("a = ");
		scanf_s("%lf", &a);

		printf("b = ");
		scanf_s("%lf", &b);

		printf("c = ");
		scanf_s("%lf", &c);

		delta = b*b - 4*a*c;

		if (delta > 0)//����delta���������������
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf_s("��������x1 = %lf, x2 = %lf\n", x1, x2);
		}
		else if (0 == delta)
		{
			x1 = x2 = (-b) / (2*a);
			printf("��Ψһ�⣡\n");
			printf("x1 = x2 = %lf\n", x1, x2);
		}
		else
		{
			printf("�޽⣡\n");
		}
		printf("\n�����������(Y/N)\n");
		scanf_s(" %c", &ch);
	} while ('y' == ch || 'Y' == ch);
	
	return 0;




}
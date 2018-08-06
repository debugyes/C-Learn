# include<stdio.h>
void huhuan_1(int a, int b)//这个函数不能完成互换的功能
{
	int t = 0;
	a = t;//这里的a是属于huhuan1中的局部变量，和主函数的a、b不冲突
	t = b;//b也同理
	b = t;
	//也就是说，在这里调换a、b中的数值，并不会对主函数的a、b产生任何影响
}
int main(void)
{
	int a = 3;//这里的a是主函数中的局部变量，和huhuan1中的a、b没有关系
	int b = 5;

	huhuan_1(a, b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
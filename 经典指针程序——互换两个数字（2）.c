# include<stdio.h>
//不能完成互换功能
void huhuan_2(int * p , int * q)
{
	int * t;//如果要互换p和q的值，则t必需是int*，不能是int
	t = p;
	p = q;
	q = t;  
	//这里只是互换了p、q两个变量中的内容。对主函数中a、b的地址没有任何影响，因为a、b的地址在主函数中定义时它们的地址就是定死的，不可能再改变
}
int main(void)
{
	int a = 3;
	int b = 5;

	huhuan_2(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
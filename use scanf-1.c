/*
时间：2018年2月4日11:26:38
目的：测试scanf的用法

*/


#include"stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int i;
	cin >> i;
	cout << i << endl;

	return 0;
}

/*
    在VC6.0中输出的结果是
————————————————
如果输入666                    
则显示出                   
666
i = 666
————————————————
*/
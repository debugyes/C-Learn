#include<stdio.h>
//����һ������ڵ����������
struct Node
{
	int data;
	struct Node * pNext;
};

int main(void)
{
	struct Node *pHead; // pHead�����������ͷ�ڵ�ĵ�ַ
	pHead = Creatlist();
	TraverseList(pHead);
	return 0;
}
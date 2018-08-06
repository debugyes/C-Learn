#include<stdio.h>
//定义一个链表节点的数据类型
struct Node
{
	int data;
	struct Node * pNext;
};

int main(void)
{
	struct Node *pHead; // pHead用来存放链表头节点的地址
	pHead = Creatlist();
	TraverseList(pHead);
	return 0;
}
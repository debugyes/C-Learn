#include<stdio.h>
struct student//��ֻ�Ƕ������µ���������û�ж������
{
	int age;
	float score;
	char sex;
};
int main(void)
{
	struct student st = { 20, 66.6F, 'f' };
	//��һ�������ʽ
	//Ϊ�˿��ø���������������Ա������ֿ���д
	printf("��һ�ַ�ʽ\n");
	printf("age:%d ", st.age);
	printf("score:%f ", st.score);
	printf("sex:%c\n", st.sex);


	printf("�ڶ��ַ�ʽ\n");
	struct student *pst = &st;//����һ��ָ�������洢�ṹ������ĵ�ַ
	                                         //���ﲻ��д�� pst
	/*��ֵ���棺
	pst->score = �ȼ���st.score = 
	*/
	printf("age:%d ", pst->age);//�ȼ���printf("age:%d", ��*pst��.age);
	printf("score:%f ", pst->score);
	printf("sex:%c\n ", pst->sex);
	return 0;
}
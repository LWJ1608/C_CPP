#include<stdio.h>

//��������Ϊ�⺯�����Զ��庯����
#include<string.h>


void test01()
{
	int a = 8;
	int b = 9;
	int tmp = a;
	a = b;
	b = tmp;
	printf("a :%d b:%d ", a, b);
}
int main()
{
	////С��һ���⺯����strcpy��
	//char ch_1[] = "8wd9d993j";
	//char ch_2[20] = { 0 };
	//strcpy_s(ch_2,10, ch_1);
	//printf("%s", ch_2);

	test01();

	return 0;
}
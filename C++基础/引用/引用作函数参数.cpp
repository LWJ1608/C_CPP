#include<iostream>
using namespace std;
void swap01(int a, int b)//ֵ����
{
	int temp=a;
	a = b;
	b = temp;

}
void swap02(int *a,int *b)//��ַ����
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
void swap03(int &a, int &b)//���ô���
{
	int temp = a;
	a = b;
	b = temp;

}
int main()
{
	int a = 10;
	int b = 20;
	//swap01(a, b);//ֵ���ݣ��ββ�������ʵ��
	//swap02(&a, &b);//��ַ���ݣ��βλ�����ʵ��
	swap03(a, b);//���ô��ݣ��βλ�����ʵ��
	cout << a << endl;
	cout << b << endl;
	return 0;
}
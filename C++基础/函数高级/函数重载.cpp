#include<iostream>
using namespace std;
//�������ص�����
//1��ͬһ��������
//2������������ͬ
//3�������������Ͳ�ͬ���������ͬ�������˳��ͬ
void func()
{
	cout << "1" << endl;
}

//int func()�����ķ���ֵ��������Ϊ�������ص���������void��int��
//{
//	cout << "1" << endl;
//}

void func(int a)
{
	cout << "2" << endl;
}
void func(double a)
{
	cout << "3" << endl;
}
void func(int a,double b)
{
	cout << "4" << endl;
}
void func(double a, int b)
{
	cout << "5" << endl;
}
int main()
{
	func();
	func(2);
	func(3.1);
	func(3.1,2);
	func(2,3.1);
}
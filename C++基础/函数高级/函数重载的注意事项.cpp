#include<iostream>
using namespace std;
//�������ص�ע������
//1������Ϊ���ص�����
//
//void func(int &a)//int &a=10;���Ϸ� 
//{
//	cout << "1" << endl;
//}
//void func(const int& a)//const int &a=10;�Ϸ�
//{
//	cout << "2" << endl;
//}
//2.������������Ĭ�ϲ���
void funct(int a,int b=10)
{
	cout << "3" << endl;
}
void funct(const int a)
{
	cout << "4" << endl;
}
int main()
{
	//int a = 10;
	//func(a);
	 
	//func(10);

	//funct(10);����������Ĭ�ϲ���������ֶ����ԣ�����Ҫ����
	return 0;
}
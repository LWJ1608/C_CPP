#include<iostream>
using namespace std;
//函数重载的注意事项
//1引用作为重载的条件
//
//void func(int &a)//int &a=10;不合法 
//{
//	cout << "1" << endl;
//}
//void func(const int& a)//const int &a=10;合法
//{
//	cout << "2" << endl;
//}
//2.函数重载碰到默认参数
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

	//funct(10);当函数碰到默认参数，会出现二义性，报错，要避免
	return 0;
}
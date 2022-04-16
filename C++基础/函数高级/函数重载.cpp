#include<iostream>
using namespace std;
//函数重载的条件
//1、同一作用域下
//2、函数名称相同
//3、函数参数类型不同，或个数不同，或参数顺序不同
void func()
{
	cout << "1" << endl;
}

//int func()函数的返回值不可以作为函数重载的条件（如void和int）
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
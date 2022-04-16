#include<iostream>
using namespace std;
//1.不要返回引用变量
int& test01()
{
	int a = 10;
	return a;
}
//2.函数的调用可以为左值.
int& test02()
{
	static int a = 10;//静态变量，放在全局区，全局区上的数据在程序结束后系统释放
	return a;
}

int main()
{
	//int& ref = test01();
	//cout << "ref=" << ref << endl;//第一次正确是因为编译器做了保留
	//cout << "ref=" << ref << endl;//第二次错误是因为a内存已被释放
	int& ref2 = test02();
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
	test02()=1000;//如果函数的返回值是引用，这个函数调用可为左值
	cout << "ref2=" << ref2 << endl;
	cout << "ref2=" << ref2 << endl;
}
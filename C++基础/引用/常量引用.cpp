#include<iostream>
using namespace std;
void show(const int &val)
{
	//val = 1000;错误操作
	cout << "a=" << val << endl;
}
int main()
{
	/////常量引用
	////使用场景，用来修饰形参，防止误操作
	//int a = 10;
	////加上const 之后，编译器将代码修改为int temp10;const int &ref=tenp;
	//const int& ref = 10;//引用必需引一块合法空间
	////ref = 20;错误示范
	////
	int a = 10;
	show(a);
}
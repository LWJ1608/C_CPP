#include<iostream>
using namespace std;
#include"类模板分文件.hpp"
#include<string>

void test01()
{
	Person<string,int> p("小婷", 21);
	p.Printshow();
}
int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}
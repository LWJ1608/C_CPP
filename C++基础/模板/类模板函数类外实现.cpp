#include<iostream>
using namespace std;
#include"��ģ����ļ�.hpp"
#include<string>

void test01()
{
	Person<string,int> p("С��", 21);
	p.Printshow();
}
int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}
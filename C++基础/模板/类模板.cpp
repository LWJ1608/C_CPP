#include<iostream>
using namespace std;
#include <string>
//类模板
 template<class N, class A=int>//先让其中的通用类型指定具体类型，后面就可以又默认参数类型
 class Person
 {
 public:
	 Person(N name, A age)
	 {
		 this->m_Name = name;
		 this->m_Age = age;
	 }
	 void show(Person &a)
	 {
		 cout << "name:" << this->m_Name << " " << "age:" << this->m_Age << endl;
	 }
	 string m_Name;
	 int  m_Age;
 };
 //1、类模板没有自动类型推导的使用方式
 void test01()
 {
	 //指定N为string类型，A为int类型（必需指定类型）
	 Person <string,int>s1("张三", 38);
	 s1.show(s1);
 }
 //2、类模板可以指定默认类型
 void test02()
 {
	 //指定N为string类型，A为int类型（必需指定类型）
	 Person <string> s2("小三", 38);
	 s2.show(s2);
 }
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
//类模板对象作为函数参数

template<class N1,class N2>
class Person
{
public:
	Person(N1 name,N2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void show()
	{
		cout << "name=" << this->m_Name << "	" << "age=" << this->m_Age << endl;
	}
	N1 m_Name;
	N2 m_Age;
};

//1、指定参数类型传入
void Print1(Person <string,int> &p)
{
	p.show();
}
void test01()
{
	Person <string, int>  p1("孙悟空",999);
	Print1(p1);
}

//2、参数模板化
template<class T1,class T2>
void Print2(Person <T1,T2>&p2)
{
	p2.show();
	cout << "T1参数类型：" << typeid(T1).name() << endl;
	cout << "T2参数类型：" << typeid(T2).name() << endl;
}
void test02()
{
	Person <string, int> p2("猪八戒", 888);
	Print2(p2);
}
//3、整个类模板化
template<class T>
void Print3(T &p3)
{
	p3.show();
	cout << "T参数类型：" << typeid(T).name() << endl;
}
void test03()
{
	Person <string, int>  p3("唐僧", 24);
	Print3(p3);
}
int main()
{
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}
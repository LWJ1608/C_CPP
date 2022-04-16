#include<iostream>
using namespace std;

//类模板与继承
template<class T>
class base
{
public:
	T m;
};
//class son:public base//错误子类继承模板父类必需标明父类的通用类型
class son:public base<int>
{
};
void test01()
{
	son p;
}
//想要灵活表现父类的类型的话，子类也要变成类模板
template<class T1,class T2>//T2可以用来表示父类的通用类型
class son1 :public base<T2>
{
public:
	son1()
	{
		cout << "T1:" << typeid(T1).name() << endl;
		cout << "T2:" << typeid(T2).name() << endl;
	}
};
void test02()
{
	son1 <char, int > t;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
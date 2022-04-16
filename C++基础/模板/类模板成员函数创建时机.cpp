#include<iostream>
using namespace std;

//类模板的创建时间
class Person1
{
public:
	void showPerson1()
	{
		cout << "调用showPerson1()" << endl;
	}
};
class Person2
{
public:
	void showPerson1()
	{
		cout << "调用showPerson2()" << endl;
	}
};

template<class T>
class Test
{
public:
	T abs;
	void show1()//成员函数在声明后，编译器不会创建它，所以类对象类对象不明确也不会报错
	{
		abs.showPerson1();
	}
	void show2()
	{
		abs.showPerson2();
	}
};
void test01()
{
	Test<Person1> app;
	app.show1();
	//app.show2();//不运行的时候不会报错
}
int main()
{
	test01();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
//常函数
class Person {
public:		
	    //this 指针的本质是常量指针，指针指向是不可修改的
		// const Person *const  this;
	   //在成员函数后面加const，修饰的是this指向，让指针指向的的值也不可修饰
	void showPerson()const//常函数
	{
		//this->m_Age = 18;
		//this = NULL;this指针不可修改指针指向

	}
	void func()
	{
		m_h = 18;
	}

public:

	int m_Age;
	mutable int m_h;//特殊变量，即使在常函数中，也可以修改这个值
};

void  test01()
{

     Person p;
	p.showPerson();
}
void test02()
{
	//常对象只能调用常函数
	const Person p;
	//p.func();//常对象不可以调用普通成员函数，因为普通成员函数可以修改属性
	p.showPerson();
}

int main() {

	test01();

	system("pause");

	return 0;
}
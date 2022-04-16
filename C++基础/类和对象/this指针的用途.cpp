#include<iostream>
using namespace std;

//
class Person {
public:
	//this指针可以解决重名问题
	Person(int age) {
		this->age = age;
	}
	// this 返回对象可以用*this实现
	Person& PersonAndPerson(Person &p)
	{
		this->age += p.age;
		//this指向p2的指针，而*this指向的就是p2这个对象本体
		return *this;
	}
	int age;

};
void test01()
{
	Person p1(18);
	cout << "p1年龄：" << p1.age << endl;
}
void test02()
{
	Person p1(10);
	Person p2(10);
	//链式编程思想
	p2.PersonAndPerson(p1).PersonAndPerson(p1);
	cout << p2.age<<endl;
}
int main()
{

	//test01();
	test02();
	system("pause");

	return 0;
}
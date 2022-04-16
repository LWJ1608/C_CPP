#include<iostream>
using namespace std;

//赋值运算符重载
class Person
{
public :
	Person (int age)
	{
		m_age = new int(age);
	}

	//重载赋值运算符
	//通过重新给赋值运算符赋予其新定义，解决浅拷贝带来的问题
	Person& operator=(Person &p)
	{
		//先判断指针是否为空
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		//编译器提供的浅拷贝
		//m_age = p.m_age;

		//自定义深拷贝
		m_age = new int(*p.m_age);
		return *this;
	}
	~Person()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}
	int* m_age;
};

void test01()
{
	Person p1(110);
	Person p2(120);
	Person p3(114);
	p3 = p2 = p1;//因为类中的属性是在堆区，如果是浅拷贝的的话，会发生重复释放空间的错误
	cout << "p1=" << *p1.m_age << endl;//由于m_age是指针所以在前面要加*符号
	cout << "p2=" << *p2.m_age << endl;
	cout << "p3=" << *p3.m_age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
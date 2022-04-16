#include <iostream>
using namespace std;

//浅拷贝和深拷贝


class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数" << endl;
	}
	Person(int age,int height)
	{
        m_age = age;
		m_height = new int(height);
		cout << "Person的有参构造函数" << endl;
	}
	//自己实现拷贝函数，解决浅拷贝带来的问题
	Person(const Person& p)
	{

		cout << "Person的拷贝构造函数" << endl;
		m_age = p.m_age;
		m_height = p.m_height;//这是编译器默认的实现的
		//下面是自己实现的深拷贝操作
		m_height = new int(*p.m_height);
	}
	~ Person()
	{
		if (m_height != NULL)
		{
			delete m_height;
		}
		cout << "Person的默认析构函数" << endl;
	}
public:
	int m_age;
	int* m_height;

};

void test01()
{
	Person p1(21,180);
	cout << "p1的年龄为：" << p1.m_age << endl;
	Person p2(p1);
	cout << "p2的年龄为：" <<p2.m_age<< endl;
}
int main()
{
	test01();

	system("pause");
	return 0;

}
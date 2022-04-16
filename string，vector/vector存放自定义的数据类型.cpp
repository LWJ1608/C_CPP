#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//vector容器存放自定义的数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
void test01()
{
	//创建数据
	vector<Person> v;
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);

	//插入数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	//遍历vector容器
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->m_name << endl;
		cout << "年龄：" << it->m_age << endl;
	}
}
void test02()
{
	//创建数据
	vector<Person*> v1;
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);

	//插入数据
	v1.push_back(&p1);
	v1.push_back(&p2);
	v1.push_back(&p3);
	v1.push_back(&p4);
	v1.push_back(&p5);
	//遍历vector容器
	for (vector<Person*>::iterator it1 = v1.begin(); it1 != v1.end(); it1++)
	{
		cout << "姓名：" << (*it1)->m_name<< endl;
		cout << "年龄：" << (*it1)->m_age<< endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
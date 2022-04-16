#include<iostream>
using namespace std;
#include<list>
//案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
//排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序

//Person类
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}
public:
	string m_name;//姓名
	int m_age;//年龄
	int m_height;//身高
};
//打印
void printList(const list<Person>& L)
{
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << it->m_name
			<< "\t年龄：" << it->m_age
			<< "\t身高：" << it->m_height << endl;
	}
}
//判断年龄和身高
bool ComparePerson(Person& p1, Person& p2)
{
	if (p1.m_age == p2.m_age)
	{
		return p1.m_height > p2.m_height;
	}
	else
	{
		return p1.m_age < p2.m_age;
	}

}
void test01()
{
	list<Person> L1;

	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	L1.push_back(p1);
	L1.push_back(p2);
	L1.push_back(p3);
	L1.push_back(p4);
	L1.push_back(p5);
	L1.push_back(p6);

	cout << "排序前：" << endl;
	printList(L1);
	//排序
	L1.sort(ComparePerson);
	cout << "排序后：" << endl;
	printList(L1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
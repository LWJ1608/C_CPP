#include<iostream>
using namespace std;
#include <string>
//ģ��ľ�����
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
template<class T>
bool myCompare(T& a, T& b)//��ͨģ�庯��
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template<> bool myCompare(Person& a, Person& b)
{
	if (a.m_name == b.m_name && a.m_age == b.m_age)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void test01()
{
	Person s1("����", 45);
	Person s2("����", 45);
	bool compare = myCompare(s1, s2);
	if (compare)
	{
		cout << "�����˵���Ϣ���" << endl;
	}
	else
	{
		cout << "�����˵���Ϣ�����" << endl;
	}
}
void test02()
{
	int a = 2;
	int b = 3;
	bool ren = myCompare(a,b);
	if (ren)
	{
		cout << "a==b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}
int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}
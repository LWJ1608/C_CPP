#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//vector��������Զ������������
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
	//��������
	vector<Person> v;
	Person p1("�����", 30);
	Person p2("����", 20);
	Person p3("槼�", 18);
	Person p4("���Ѿ�", 15);
	Person p5("����", 24);

	//��������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	//����vector����
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_name << endl;
		cout << "���䣺" << it->m_age << endl;
	}
}
void test02()
{
	//��������
	vector<Person*> v1;
	Person p1("�����", 30);
	Person p2("����", 20);
	Person p3("槼�", 18);
	Person p4("���Ѿ�", 15);
	Person p5("����", 24);

	//��������
	v1.push_back(&p1);
	v1.push_back(&p2);
	v1.push_back(&p3);
	v1.push_back(&p4);
	v1.push_back(&p5);
	//����vector����
	for (vector<Person*>::iterator it1 = v1.begin(); it1 != v1.end(); it1++)
	{
		cout << "������" << (*it1)->m_name<< endl;
		cout << "���䣺" << (*it1)->m_age<< endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
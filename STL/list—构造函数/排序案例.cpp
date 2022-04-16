#include<iostream>
using namespace std;
#include<list>
//������������Person�Զ����������ͽ�������Person�����������������䡢���
//������򣺰�����������������������ͬ������߽��н���

//Person��
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
	string m_name;//����
	int m_age;//����
	int m_height;//���
};
//��ӡ
void printList(const list<Person>& L)
{
	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << it->m_name
			<< "\t���䣺" << it->m_age
			<< "\t��ߣ�" << it->m_height << endl;
	}
}
//�ж���������
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

	Person p1("����", 35, 175);
	Person p2("�ܲ�", 45, 180);
	Person p3("��Ȩ", 40, 170);
	Person p4("����", 25, 190);
	Person p5("�ŷ�", 35, 160);
	Person p6("����", 35, 200);

	L1.push_back(p1);
	L1.push_back(p2);
	L1.push_back(p3);
	L1.push_back(p4);
	L1.push_back(p5);
	L1.push_back(p6);

	cout << "����ǰ��" << endl;
	printList(L1);
	//����
	L1.sort(ComparePerson);
	cout << "�����" << endl;
	printList(L1);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;

//��ֵ���������
class Person
{
public :
	Person (int age)
	{
		m_age = new int(age);
	}

	//���ظ�ֵ�����
	//ͨ�����¸���ֵ������������¶��壬���ǳ��������������
	Person& operator=(Person &p)
	{
		//���ж�ָ���Ƿ�Ϊ��
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		//�������ṩ��ǳ����
		//m_age = p.m_age;

		//�Զ������
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
	p3 = p2 = p1;//��Ϊ���е��������ڶ����������ǳ�����ĵĻ����ᷢ���ظ��ͷſռ�Ĵ���
	cout << "p1=" << *p1.m_age << endl;//����m_age��ָ��������ǰ��Ҫ��*����
	cout << "p2=" << *p2.m_age << endl;
	cout << "p3=" << *p3.m_age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
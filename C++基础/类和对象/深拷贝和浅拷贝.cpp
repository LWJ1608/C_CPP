#include <iostream>
using namespace std;

//ǳ���������


class Person
{
public:
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯��" << endl;
	}
	Person(int age,int height)
	{
        m_age = age;
		m_height = new int(height);
		cout << "Person���вι��캯��" << endl;
	}
	//�Լ�ʵ�ֿ������������ǳ��������������
	Person(const Person& p)
	{

		cout << "Person�Ŀ������캯��" << endl;
		m_age = p.m_age;
		m_height = p.m_height;//���Ǳ�����Ĭ�ϵ�ʵ�ֵ�
		//�������Լ�ʵ�ֵ��������
		m_height = new int(*p.m_height);
	}
	~ Person()
	{
		if (m_height != NULL)
		{
			delete m_height;
		}
		cout << "Person��Ĭ����������" << endl;
	}
public:
	int m_age;
	int* m_height;

};

void test01()
{
	Person p1(21,180);
	cout << "p1������Ϊ��" << p1.m_age << endl;
	Person p2(p1);
	cout << "p2������Ϊ��" <<p2.m_age<< endl;
}
int main()
{
	test01();

	system("pause");
	return 0;

}
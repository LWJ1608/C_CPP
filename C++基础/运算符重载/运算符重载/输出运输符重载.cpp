#include<iostream>
using namespace std;
//�����<<����

class Person
{
	friend ostream& operator<<(ostream& out, const Person& p);
public:
	Person() {};
	Person(int a, int b)
	{
		this->m_a = a;
		this->m_b = b;
	}
private:
	int m_a;
	int m_b;
};
//cout������������ostream&
//
ostream& operator<<(ostream& cout, const Person& p)
{
	cout << p.m_a << p.m_b << endl;
	return cout;
}
void test01()
{
	Person p1(1, 2);
	Person p2(2, 2);
	cout << p1 <<p2<< "ll" << endl;//��ʽ˼��
}
int main()
{
	test01();
	system("pause");
	return 0;
}
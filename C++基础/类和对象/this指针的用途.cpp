#include<iostream>
using namespace std;

//
class Person {
public:
	//thisָ����Խ����������
	Person(int age) {
		this->age = age;
	}
	// this ���ض��������*thisʵ��
	Person& PersonAndPerson(Person &p)
	{
		this->age += p.age;
		//thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
		return *this;
	}
	int age;

};
void test01()
{
	Person p1(18);
	cout << "p1���䣺" << p1.age << endl;
}
void test02()
{
	Person p1(10);
	Person p2(10);
	//��ʽ���˼��
	p2.PersonAndPerson(p1).PersonAndPerson(p1);
	cout << p2.age<<endl;
}
int main()
{

	//test01();
	test02();
	system("pause");

	return 0;
}
#include<iostream>
using namespace std;

//��ģ��Ĵ���ʱ��
class Person1
{
public:
	void showPerson1()
	{
		cout << "����showPerson1()" << endl;
	}
};
class Person2
{
public:
	void showPerson1()
	{
		cout << "����showPerson2()" << endl;
	}
};

template<class T>
class Test
{
public:
	T abs;
	void show1()//��Ա�����������󣬱��������ᴴ����������������������ȷҲ���ᱨ��
	{
		abs.showPerson1();
	}
	void show2()
	{
		abs.showPerson2();
	}
};
void test01()
{
	Test<Person1> app;
	app.show1();
	//app.show2();//�����е�ʱ�򲻻ᱨ��
}
int main()
{
	test01();
	system("pause");
	return 0;
}
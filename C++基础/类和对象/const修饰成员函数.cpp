#include<iostream>
using namespace std;
//������
class Person {
public:		
	    //this ָ��ı����ǳ���ָ�룬ָ��ָ���ǲ����޸ĵ�
		// const Person *const  this;
	   //�ڳ�Ա���������const�����ε���thisָ����ָ��ָ��ĵ�ֵҲ��������
	void showPerson()const//������
	{
		//this->m_Age = 18;
		//this = NULL;thisָ�벻���޸�ָ��ָ��

	}
	void func()
	{
		m_h = 18;
	}

public:

	int m_Age;
	mutable int m_h;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ
};

void  test01()
{

     Person p;
	p.showPerson();
}
void test02()
{
	//������ֻ�ܵ��ó�����
	const Person p;
	//p.func();//�����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
	p.showPerson();
}

int main() {

	test01();

	system("pause");

	return 0;
}
#include<iostream>
using namespace std;
//��Ա��������Ϊ˽��
//1.���Կ��ƶ�дȨ��
//2.����д���Լ�������׼ȷ
class Person
{
public:
	void setName(string name)
	{    
		Name = name;	    
	}
	string getName()
	{ 

		return Name;
	}
	int getAge()
	{
		Age = 21;
		return Age;
	}
	void setLover(string lover)
	{
		Lover = lover;
	}
	//��������
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
		   cout << "�����������,���������룡" << endl;
		}
		else
		{	  
			Age = age;
		}

	}
private:
	//����   �ɶ���д
	string Name;

	//����   �ɶ�����д
	int Age;

	//����   ���ɶ���д
	string Lover;
	//
	//
	//
};
int main()
{
	Person s1;
	s1.setName("������");
	cout << "����Ϊ��" << s1.getName() << endl;
	//s1.setAge()����
	cout << "����Ϊ��" << s1.getAge() << endl;
	s1.setLover("�ۻ�");
	//cout << "����Ϊ��" << s1.getLover() << endl;����
	s1.setAge(991);

	return 0;
}
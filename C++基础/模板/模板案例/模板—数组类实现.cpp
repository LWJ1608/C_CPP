//������ʵ��
#include"MyArray.hpp"

//��ӡ����
void PrintArr(MyArray <int> & arr )
{
	cout << "��ӡ����Ԫ��" << endl;
	for (int i = 0; i < arr.get_size(); i++)
	{ 
		cout << arr[i] << endl;
	}
}
void test01()
{
	MyArray<int> arr1(19);
	MyArray<int>arr2(arr1);
	cout << "����β�巨------" << endl;
	for (int j = 0; j < 5; j++)
	{
		arr1.Push(j);
	}
	PrintArr(arr1);
	cout << "���Ի�ȡ����Ԫ�ظ���------" << endl;
	cout << "arr1Ԫ�ظ���Ϊ" << arr1.get_size() << endl;
	cout << "���Ի�ȡ��������------" << endl;
	cout << "arr1������СΪ" << arr1.get_capacity() << endl;

	cout << "ִ��βɾ�����Ժ�------" << endl;
	arr1.Delete();
	PrintArr(arr1);
	cout << "���Ի�ȡ����Ԫ�ظ���------" << endl;
	cout << "arr1Ԫ�ظ���Ϊ" << arr1.get_size() << endl;
	cout << "���Ի�ȡ��������------" << endl;
	cout << "arr1������СΪ" << arr1.get_capacity() << endl;
}

class Person
{
public:
	string m_name;
	int m_age;
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
};

void Print(MyArray <Person>& person)
{
	for (int i = 0; i < person.get_size(); i++)
	{
		cout << "������" << person[i].m_name << endl;
		cout << "���䣺" << person[i].m_age << endl;
	}
}
//�����Զ�����������
void test02()
{
	//��������
	MyArray<Person> pArray(10);
	Person p1("�����", 30);
	Person p2("����", 20);
	Person p3("槼�", 18);
	Person p4("���Ѿ�", 15);
	Person p5("����", 24);
	//��������
	pArray.Push(p1);
	pArray.Push(p2);
	pArray.Push(p3);
	pArray.Push(p4);
	pArray.Push(p5);
	Print(pArray);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
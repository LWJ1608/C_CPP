#include<iostream>
using namespace std;
#include <string>
class Student
{
public:
	string name;
	int id;

	void put_ni()
	{
		cout << "������ѧ��������" << endl;
		cin >> name;
		cout << endl;
		cout << "������ѧ��ѧ�ţ�" << endl;
		cin >> id;
	}

	void print()
	{
		cout << "ѧ��������" << name << endl << "ѧ��ѧ�ţ�" << id << endl;
	}
};

int main()
{
	Student s1;
	s1.put_ni();
	//s1.name = "������";
	//s1.id = 4191608;
	s1.print();
}
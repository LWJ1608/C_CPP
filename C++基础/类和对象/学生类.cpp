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
		cout << "请输入学生姓名：" << endl;
		cin >> name;
		cout << endl;
		cout << "请输入学生学号：" << endl;
		cin >> id;
	}

	void print()
	{
		cout << "学生姓名：" << name << endl << "学生学号：" << id << endl;
	}
};

int main()
{
	Student s1;
	s1.put_ni();
	//s1.name = "廖望钧";
	//s1.id = 4191608;
	s1.print();
}
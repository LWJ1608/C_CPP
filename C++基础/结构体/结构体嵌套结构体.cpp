#include<iostream>
#include<string>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};
struct teacher {
	int id;
	string name;
	int age;
	struct student stu;
};
int main() {
	teacher t;
	t.id = 0400000;
	t.name = "С��";
	t.age = 23;
	t.stu.name = "С��";
	t.stu.age = 16;
	t.stu.score = 99;
	cout << "��ʦ��ţ�" << t.id  <<",��ʦ������"<< t.name
		 << ",��ʦ���䣺" << t.age <<",ѧ�����֣�"<<t.stu.name
		 <<" ,ѧ�����䣺" << t.stu.age <<",ѧ��������"<< t.stu.score;

}
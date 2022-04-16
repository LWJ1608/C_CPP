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
	t.name = "小王";
	t.age = 23;
	t.stu.name = "小廖";
	t.stu.age = 16;
	t.stu.score = 99;
	cout << "老师编号：" << t.id  <<",老师姓名："<< t.name
		 << ",老师年龄：" << t.age <<",学生名字："<<t.stu.name
		 <<" ,学生年龄：" << t.stu.age <<",学生分数："<< t.stu.score;

}
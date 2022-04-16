#include<iostream>
using namespace std;
#include<string>
struct Student {
	string name;
	int age;
	int score;
};
int main() {
	Student s = {"小三",83,38};
	Student* p = &s;//通过指针指向结构体变量，使用指针可以减少内存空间，而且不会复指出新的副本出来
	cout << "姓名：" << p->name << "年龄：" << p->age << "分数：" << p->score;
}
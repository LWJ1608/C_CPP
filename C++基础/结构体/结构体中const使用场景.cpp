#include<iostream>
using namespace std;
#include<string>
struct Student {   //学生结构体
	//成员列表
	string name;   
	int age;
	int score;
};
void printStudent(const struct Student* p) {   //const让结构体成员参数不可修改
	p->name;
	cout << "地址传递结果" << endl << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}
int main() {
	Student s = {"小王",22,99};
	printStudent(&s);
	
}
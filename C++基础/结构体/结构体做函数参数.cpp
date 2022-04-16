#include<iostream>
using namespace std;
#include <string>
struct Student {
	string name;
	int age;
	int score;
};
void printStudent1(struct Student s) {  //打印学生信息函数(值传递)
	s.age = 38;
	cout << "值传递结果" << endl << "姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score<<endl;
}
void printStudent2(struct Student * p) {
	p->age = 38;
	cout << "地址传递结果" << endl << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score<<endl;
}
int main() {
	struct Student s;//创建结构体变量
	s.name = "小三";
	s.age=88;
	s.score=99;
	printStudent1(s);//值传递
	//printStudent2(&s);//地址传递
	cout<<"主函数中打印的结果"<<endl<<"姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score;
}//在进行值传递时，函数中的变量改变不能修改主函数输出的结果，而地址传递可以。
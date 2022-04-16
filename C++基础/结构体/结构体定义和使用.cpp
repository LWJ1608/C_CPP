#include<iostream>
#include <string>
using namespace std;

struct student {
	string name;//姓名
	int age;//年龄
	int score;//分数
};
int main() {
	//struct student s1;//创建结构通变量
	//s1.age =99;
	//s1.name ="张三";
	//s1.score=10;
	//cout << "姓名" << s1.name
	//	<< "年龄" << s1.age
	//	<< "分数" << s1.score;
	struct student s2 = { "李四",77,99 };//关键字（struct）可以省略
	cout << "姓名" << s2.name
		 << "年龄" << s2.age
	     << "分数" << s2.score;
}
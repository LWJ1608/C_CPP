#include<iostream>
#include<string>
using namespace std;
struct Student {
	string name;
	int age;
	int score;
};
int main() {
	Student stuArr[3] = {
	{"小三",38,36},
	{"小四",88,88},
	{"小吴",77,55}
	};
	//遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << stuArr[i].name << "年龄：" << stuArr[i].age << "分数：" << stuArr[i].score<<endl;
	}
}

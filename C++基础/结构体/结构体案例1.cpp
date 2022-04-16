#include<iostream>
using namespace std;
#include <string>
#include <ctime>
struct Student {  //老师所带学生信息
	string sName;
	int score;
};

struct Teacher {  //老师信息
	string tName;
	struct Student sArr[5];
};
string namespeed = "ABCDE";

void allocateSpace(struct Teacher tArr[],int len) {  //给老师和他们所属学生赋值的函数
	for (int i = 0; i < len; i++) {
		tArr[i].tName = "Teacher_";
		tArr[i].tName += namespeed[i];
		for (int j = 0; j < 5; j++) {
			tArr[i].sArr[j].sName = "Student_";
		    tArr[i].sArr[j].sName += namespeed;
			int random = rand() % 60 + 40;//产生随机数40~90
			tArr[i].sArr[j].score=random;
		}
	}

}
void printInfo(struct Teacher tArr[], int len) {   //输出老师及其所带学生信息
	for (int i = 0; i < len; i++) {
		cout << "老师姓名：" << tArr[i].tName<<endl;
		for (int j = 0; j < 5; j++) {
			cout << "\t所带学生姓名；" << tArr[i].sArr[j].sName 
				 << "  考试分数：" << tArr[i].sArr[j].score << endl;
		      
		}
	}
}
int main() {
	srand((unsigned int)time(NULL));//随机数种子
	struct Teacher tArr[3];//老师结构体声明
	int len = sizeof(tArr) / sizeof(tArr[0]);//J计算数组大小
	allocateSpace(tArr, len);
	printInfo(tArr, len);
}
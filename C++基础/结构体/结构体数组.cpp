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
	{"С��",38,36},
	{"С��",88,88},
	{"С��",77,55}
	};
	//�����ṹ������
	for (int i = 0; i < 3; i++) {
		cout << "������" << stuArr[i].name << "���䣺" << stuArr[i].age << "������" << stuArr[i].score<<endl;
	}
}

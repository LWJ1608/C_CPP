#include<iostream>
using namespace std;
#include<string>
struct Student {
	string name;
	int age;
	int score;
};
int main() {
	Student s = {"С��",83,38};
	Student* p = &s;//ͨ��ָ��ָ��ṹ�������ʹ��ָ����Լ����ڴ�ռ䣬���Ҳ��Ḵָ���µĸ�������
	cout << "������" << p->name << "���䣺" << p->age << "������" << p->score;
}
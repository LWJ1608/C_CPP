#include<iostream>
using namespace std;
#include<string>
struct Student {   //ѧ���ṹ��
	//��Ա�б�
	string name;   
	int age;
	int score;
};
void printStudent(const struct Student* p) {   //const�ýṹ���Ա���������޸�
	p->name;
	cout << "��ַ���ݽ��" << endl << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}
int main() {
	Student s = {"С��",22,99};
	printStudent(&s);
	
}
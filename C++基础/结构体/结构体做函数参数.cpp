#include<iostream>
using namespace std;
#include <string>
struct Student {
	string name;
	int age;
	int score;
};
void printStudent1(struct Student s) {  //��ӡѧ����Ϣ����(ֵ����)
	s.age = 38;
	cout << "ֵ���ݽ��" << endl << "������" << s.name << " ���䣺" << s.age << " ������" << s.score<<endl;
}
void printStudent2(struct Student * p) {
	p->age = 38;
	cout << "��ַ���ݽ��" << endl << "������" << p->name << " ���䣺" << p->age << " ������" << p->score<<endl;
}
int main() {
	struct Student s;//�����ṹ�����
	s.name = "С��";
	s.age=88;
	s.score=99;
	printStudent1(s);//ֵ����
	//printStudent2(&s);//��ַ����
	cout<<"�������д�ӡ�Ľ��"<<endl<<"������" << s.name << " ���䣺" << s.age << " ������" << s.score;
}//�ڽ���ֵ����ʱ�������еı����ı䲻���޸�����������Ľ��������ַ���ݿ��ԡ�
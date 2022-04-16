#include<iostream>
using namespace std;
#include <string>
#include <ctime>
struct Student {  //��ʦ����ѧ����Ϣ
	string sName;
	int score;
};

struct Teacher {  //��ʦ��Ϣ
	string tName;
	struct Student sArr[5];
};
string namespeed = "ABCDE";

void allocateSpace(struct Teacher tArr[],int len) {  //����ʦ����������ѧ����ֵ�ĺ���
	for (int i = 0; i < len; i++) {
		tArr[i].tName = "Teacher_";
		tArr[i].tName += namespeed[i];
		for (int j = 0; j < 5; j++) {
			tArr[i].sArr[j].sName = "Student_";
		    tArr[i].sArr[j].sName += namespeed;
			int random = rand() % 60 + 40;//���������40~90
			tArr[i].sArr[j].score=random;
		}
	}

}
void printInfo(struct Teacher tArr[], int len) {   //�����ʦ��������ѧ����Ϣ
	for (int i = 0; i < len; i++) {
		cout << "��ʦ������" << tArr[i].tName<<endl;
		for (int j = 0; j < 5; j++) {
			cout << "\t����ѧ��������" << tArr[i].sArr[j].sName 
				 << "  ���Է�����" << tArr[i].sArr[j].score << endl;
		      
		}
	}
}
int main() {
	srand((unsigned int)time(NULL));//���������
	struct Teacher tArr[3];//��ʦ�ṹ������
	int len = sizeof(tArr) / sizeof(tArr[0]);//J���������С
	allocateSpace(tArr, len);
	printInfo(tArr, len);
}
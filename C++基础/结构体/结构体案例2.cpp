#include<iostream>
using namespace std;
#include <string>
//1�����Ӣ�۽ṹ��
struct Hero {
	string name;
	int age;
	string sex;
};
void bubbleSort(struct Hero heroArr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (heroArr[j+1].age < heroArr[j].age) {
				struct Hero temp = heroArr[j];
				heroArr[j] = heroArr[j + 1];
				heroArr[j + 1] = temp;

			}
		}
	}
}
void printHero(struct Hero heroArr[], int len) {
	cout << "�����" << endl;
	for (int i = 0; i < len; i++) {
		cout << "Ӣ��������" << heroArr[i].name
			<< " Ӣ�����䣺" << heroArr[i].age
			<< " Ӣ���Ա�" << heroArr[i].sex << endl;
	}
}
int main() {

	
	//2������������5��Ӣ��
	Hero heroArr[5] = { {"����",23,"��"}, 
		                {"����",22,"��"}, 
		                {"�ŷ�",28,"��"},
	                	{"����",21,"��"} ,
	                   	{"����",18,"Ů"} };
	//����ǰ�Ľ��
	int len = sizeof(heroArr) / sizeof(heroArr[0]);
	cout << "����ǰ��" << endl;
	for (int i = 0; i < len; i++) {
		cout<< "Ӣ��������" << heroArr[i].name
		    << " Ӣ�����䣺" << heroArr[i].age 
			<< " Ӣ���Ա�" << heroArr[i].sex << endl;
	}
	//3��������������򣬰������ɴ�С
	
	bubbleSort(heroArr, len);

	//4����ӡ�������Ľ��
	printHero(heroArr,len);
}
#include<iostream>
#include <string>
using namespace std;

struct student {
	string name;//����
	int age;//����
	int score;//����
};
int main() {
	//struct student s1;//�����ṹͨ����
	//s1.age =99;
	//s1.name ="����";
	//s1.score=10;
	//cout << "����" << s1.name
	//	<< "����" << s1.age
	//	<< "����" << s1.score;
	struct student s2 = { "����",77,99 };//�ؼ��֣�struct������ʡ��
	cout << "����" << s2.name
		 << "����" << s2.age
	     << "����" << s2.score;
}
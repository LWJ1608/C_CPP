#include<iostream>
using namespace std;
#include <string>
//1、设计英雄结构体
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
	cout << "排序后：" << endl;
	for (int i = 0; i < len; i++) {
		cout << "英雄姓名：" << heroArr[i].name
			<< " 英雄年龄：" << heroArr[i].age
			<< " 英雄性别：" << heroArr[i].sex << endl;
	}
}
int main() {

	
	//2、创建数组存放5名英雄
	Hero heroArr[5] = { {"刘备",23,"男"}, 
		                {"关羽",22,"男"}, 
		                {"张飞",28,"男"},
	                	{"赵云",21,"男"} ,
	                   	{"貂蝉",18,"女"} };
	//排序前的结果
	int len = sizeof(heroArr) / sizeof(heroArr[0]);
	cout << "排序前：" << endl;
	for (int i = 0; i < len; i++) {
		cout<< "英雄姓名：" << heroArr[i].name
		    << " 英雄年龄：" << heroArr[i].age 
			<< " 英雄性别：" << heroArr[i].sex << endl;
	}
	//3、对数组进行排序，按年龄由大到小
	
	bubbleSort(heroArr, len);

	//4、打印出排序后的结果
	printHero(heroArr,len);
}
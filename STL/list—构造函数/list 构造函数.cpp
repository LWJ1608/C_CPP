#include<iostream>
using namespace std;
#include<list>

//list 容器构造函数

//打印list容器函数
void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << (*it)<<" ";
	}
	cout << endl;
}
void test01()
{
	list<int> L1;//默认构造
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	printList(L1);

	list<int> L2(L1);//拷贝构造
	printList(L2);

	list<int> L3(L2.begin(), L2.end());//区间拷贝拷贝[begin,end]
	printList(L3);

	list<int> L4(4, 100);//构造函数将n个elem拷贝给本身
	printList(L4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
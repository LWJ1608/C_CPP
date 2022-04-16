#include<iostream>
using namespace std;
#include<list>

//list容器的赋值和互换

//打印list容器函数
void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}
void test01()
{
	list<int> L1;
	L1.push_back(10);//通过尾插法
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	list<int> L2;
	L2.assign(L1.begin(),L1.end());//通过assign接口赋值
	printList(L2);

	list<int> L3;
	L3 = L2;//利用operator= 重载赋值
	printList(L3);
}
//list容器互换
void test02()
{
	cout << "互换前：" << endl;
	list<int> L1;
	L1.push_back(10);//通过尾插法
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	list<int> L2;
	L2.push_back(50);//通过尾插法
	L2.push_back(60);
	L2.push_back(70);
	L2.push_back(80);
	printList(L2);

	cout << "互换后：" << endl;
	L1.swap(L2);
	printList(L1);
	printList(L2);

}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}

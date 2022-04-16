#include<iostream>
using namespace std;
#include<deque>

//打印
void PrintDuque(const deque<int>& d)//const用来防止修改，后面迭代器也要修改为const_iterator
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;迭代器现在不可修改
		cout << *it << " ";
	}
	cout << endl;
}
//duque构造函数
void test01()
{
	//普通构造
	deque<int> d1;
	for (int i = 0; i < 8; i++)
	{
		d1.push_back(i);
	}
	PrintDuque(d1);

	//拷贝v1的begin与end之间的数据
	deque<int> d2(d1.begin(), d1.end());
	PrintDuque(d2);

	//拷贝构造函数
	deque<int> d3(d2);
	PrintDuque(d3);

	deque<int>d4(10, 100);//向d4存入10个100
	PrintDuque(d4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
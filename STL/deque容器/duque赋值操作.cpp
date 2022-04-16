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
void test01()
{
	deque<int> d1;
	for (int i = 0; i < 8; i++)
	{
		d1.push_back(i);
	}
	PrintDuque(d1);
	//operator= 赋值
	deque<int> d2;
	d2 = d1;
	PrintDuque(d2);

	//复制区间赋值
	deque<int> d3;
	d3.assign(d2.begin(),d2.end());
	PrintDuque(d3);

	//使用assign输入10个100
	deque<int> d4;
	d4.assign(10, 100);
	PrintDuque(d4);
}
int main()
{
	test01();

	system("pause");
	return 0;
}
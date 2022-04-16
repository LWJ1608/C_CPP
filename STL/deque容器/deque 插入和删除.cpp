#include<iostream>
using namespace std;
#include<deque>

//打印
void printDeque(const deque<int> &d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//插入
void test01()
{
	deque<int> d1;
	deque<int>d2;
	for (int i = 0; i < 4; i++)
	{
		d2.push_back(0);
	}
	d1.push_back(9);//尾插
	d1.push_back(9);//尾插
	d1.push_back(9);//尾插
	d1.push_back(9);//尾插
	d1.push_front(8);//头插
	d1.push_front(8);//头插
	d1.push_front(8);//头插
	d1.push_front(8);//头插
	printDeque(d1);

	//指定位置插入：
	d1.insert(d1.begin(), 1);
	cout << "在begin这个位置插入1后：" << endl;
	printDeque(d1);
	cout << "在begin这个位置插入2个2后：" << endl;
	d1.insert(d1.begin(), 2, 2);
	printDeque(d1);
	cout << "在begin这个位置插入[begin,end]区间的数据后：" << endl;
	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);
}
//删除
void test02()
{
	deque<int> d1;
	deque<int>d2;
	deque<int>d3;

	for (int i = 0; i < 8; i++)
	{
		d1.push_back(i);
	}
	d3 = d2 = d1;
	d1.pop_front();//头删
	d1.pop_back();//尾删
	printDeque(d1);

	d1.erase(d1.begin(),d1.end());
	printDeque(d1);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
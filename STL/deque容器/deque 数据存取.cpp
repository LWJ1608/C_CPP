#include<iostream>
using namespace std;
#include<deque>
//- `at(int idx); `     //返回索引idx所指的数据
//- `operator[]; `      //返回索引idx所指的数据
//- `front(); `         //返回容器中第一个数据元素
//- `back(); `          //返回容器中最后一个数据元素
void test01()
{
	deque<int> d1;
	deque<int>d2;
	for (int i = 0; i < 6; i++)
	{
		d1.push_back(i);
	}

	//at
	cout << "at:";
	for (int i = 0; i < d1.size(); i++)
	{
		cout<< d1.at(i)<<" ";
	}
	cout << endl;

	//operator[]
	cout << "operator[]:";
	for (int i = 1; i < d1.size(); i++)
	{
		cout << d1[i] <<" ";
	}
	cout << endl;

	////返回容器中第一个数据元素
	cout << "d1第一个元素: " << d1.front() << endl;
	cout << "d1最后一个元素: " << d1.back() << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}

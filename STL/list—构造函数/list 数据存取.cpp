#include<iostream>
using namespace std;
#include<list>


void test01()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(20);
	L1.push_back(20);
	L1.push_back(70);

	//cout << at(1) << endl;//错误 list容器支持at方式访问数据
	//cout << L1[1] << endl;//list容器不支持[]的方式访问数据
	cout << L1.back() << endl;//返回最后一个元素
	cout << L1.front() << endl;//返回第一个元素
	
	//list容器是双向迭代器，不支持随机访问
	list<int>::iterator it = L1.begin();
	//it = it + 1;////错误，list容器 不可跳跃访问，+1也不行
}
int main()
{
	test01();
	system("pause");
	return 0;
}
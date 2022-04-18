#include<iostream>
using namespace std;
#include<vector>

//vector容器赋值

//打印容器元素
void PrintVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int>v1;//无参构造
	for (int i = 0; i < 9; i++)//通过push_Back()赋值
	{
		v1.push_back(i);
	}
	PrintVector(v1);

	vector<int> v2;
	v2 = v1;//通过容器中 operator= 赋值
	PrintVector(v2);

	vector<int> v3;
	v3.assign(v2.begin(), v2.end());//把区间传入assign函数赋值
	PrintVector(v3);

	vector<int>v4;
	v4.assign(4, 10);//利用assign复制4个10，放入容器中
	PrintVector(v4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include<vector>

void test01()
{
	vector<int> v;

	//预留空间
	v.reserve(100000);//如果不用reserve的话需要30次分配空间，预留的话最快可以一次分配可完成
	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])//用来记录向v中插入100000个数据会换多少次空间才能完成
		{
			p = &v[0];
			num++;
		}
	}
	cout << "num=" <<num<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
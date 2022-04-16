#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


void Print(int val)
{
	cout << val<<endl;
}

//vector容器存放内置数据类型
void test01()
{
	vector<int> v;
	//向容器中插入数据
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);	
	v.push_back(4);
	v.push_back(5);

	//通过迭代器访问容器中的数据

	//vector<int>::iterator itBegin = v.begin();//起始迭代器，指向容器的第一个元素
	//vector<int>::iterator itEnd = v.end();//结束迭代器，指向容器的最后一个元素的下一个
	//第一种遍历方式
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	*itBegin++;
	//}

	//第二种遍历方式
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}
	
	//第三种遍历方式   利用STL提供的遍历算法
	for_each(v.begin(), v.end(), Print);

}
int main()
{
	test01();
	system("pause");
	return 0;
}
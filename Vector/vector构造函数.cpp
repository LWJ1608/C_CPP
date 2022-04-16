#include<iostream>
using namespace std;
#include<vector>
//vector构造函数

//*`vector<T > v; `               		     //采用模板实现类实现，默认构造函数
//* `vector(v.begin(), v.end());   `       //将v[begin(), end())区间中的元素拷贝给本身。
//* `vector(n, elem); `                            
//* `vector(const vector& vec); `         //拷贝构造函数。


//打印vector容器函数
// 方法一：
//void PrintVector(vector<int>& v)
//{
//	cout << "容器元素；" << endl;
//	for (int j = 0; j < v.size(); j++)
//	{
//		cout << v[j] << " ";
//	}
//	cout << endl;
//}
//方法二：
void PrintVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
}
void test01()
{
	vector<int> v1;//默认构造函数，无参构造
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	PrintVector(v1);

	vector<int> v2(v1.begin(), v1.end());//有参构造
	PrintVector(v2);

	vector<int>v3(4, 10);//构造函数将n个elem拷贝给本身。
	PrintVector(v3);

	vector<int> v4(v3);//拷贝构造函数
	PrintVector(v4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
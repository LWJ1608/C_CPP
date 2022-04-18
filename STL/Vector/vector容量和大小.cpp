#include<iostream>
using namespace std;
#include<vector>


//打印容器元素
void PrintVector(vector<int> v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	if (v1.empty())
	{
		cout << "v1为空！" << endl;
	}
	else
	{
		cout << "v1不为空。" <<endl;
		cout << "v1容量为：" << v1.capacity() << endl;
		cout << "v1大小为：" << v1.size() << endl;
	}
	//resize()可以重新定义v1的容量，把原来的数据拷贝过来，释放原空间
	//resize 重新指定大小 ，若指定的更大，默认用0填充新位置，可以利用重载版本替换默认填充
	v1.resize(10, 1);//定义容量为10，剩余空间用1填充
	PrintVector(v1);
	cout << "v1重定义过的空间" << endl;
	cout << "v1容量为：" << v1.capacity() << endl;
	cout << "v1大小为：" << v1.size() << endl;

	v1.resize(4);//定义大小为4，空间容量还是原来
	cout << "v1容量为：" << v1.capacity() << endl;
	cout << "v1大小为：" << v1.size() << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
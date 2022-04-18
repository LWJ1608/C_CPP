#include<iostream>
using namespace std;
#include<string>

//string字符存取(实际就对[]符号进行重载实现的功能)
void test01()
{
	string str = "hello";
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;
	//修改字符
	str[0] = 'H';
	cout << "str=" << str << endl;
	//通过string容器中的at函数修改字符
	str.at(1) = 'E';
	cout <<"str="<< str << endl;
}
int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}
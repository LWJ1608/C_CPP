#include<iostream>
using namespace std;
#include<string>
//string字符串比较

void test01()
{
	string str1 = "halle";
	string str2 = "halloe";

	int pos = str1.compare(str2);
	if (pos == 0)
	{
		cout << "两个字符串相等。" << endl;
	}
	else if (pos == 1)
	{
		cout << "str1>str2" << endl;
	}
	else if (pos == -1)
	{
		cout << "str1<str2" << endl;
	}
}
int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}
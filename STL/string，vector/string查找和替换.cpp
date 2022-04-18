#include<iostream>
using namespace std;
#include<string>
//string查找和替换
//* `int find(const string& str, int pos = 0) const; `              //查找str第一次出现位置,从pos开始查找
//* `int find(const char* s, int pos = 0) const; `                     //查找s第一次出现位置,从pos开始查找
//* `int find(const char* s, int pos, int n) const; `               //从pos位置查找s的前n个字符第一次位置
//* `int find(const char c, int pos = 0) const; `                       //查找字符c第一次出现位置
//* `int rfind(const string& str, int pos = npos) const; `      //查找str最后一次位置,从pos开始查找
//* `int rfind(const char* s, int pos = npos) const; `              //查找s最后一次出现位置,从pos开始查找
//* `int rfind(const char* s, int pos, int n) const; `              //从pos查找s的前n个字符最后一次位置
//* `int rfind(const char c, int pos = 0) const;  `                      //查找字符c最后一次出现位置
//* `string& replace(int pos, int n, const string& str); `       //替换从pos开始n个字符为字符串str
//* `string& replace(int pos, int n, const char* s); `                 //替换从pos开始的n个字符为字符串s


//查找
void test01()
{
	string str1="come on,c++";
	int pos = str1.find("on");

	
	pos = str1.rfind("on");
	if (pos == -1)
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "pos = " << pos << endl;
	}
}
//替换
void test02()
{
	string str2="dopfapdof";
	string pos = str2.replace(1, 2,"do");
	cout << "pos=" << pos << endl;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
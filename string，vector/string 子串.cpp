#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str1 = "hello";
	string str2=str1.substr(1, 1);
	cout << str2;
}
//实际应用
void test02()
{
	string email = "zhangsan@124.com";
	int pos = email.find('@');
	cout << "pos=" << pos << endl;
	
	string str2 = email.substr(0,pos);//意思是从第一个字符截取到pos的前一个
	cout << "str2=" << str2 << endl;
}
int main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}
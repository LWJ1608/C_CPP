#include<iostream>
using namespace std;
#include<string>

void test01()
{
	string str1 = "hello";
	string str2=str1.substr(1, 1);
	cout << str2;
}
//ʵ��Ӧ��
void test02()
{
	string email = "zhangsan@124.com";
	int pos = email.find('@');
	cout << "pos=" << pos << endl;
	
	string str2 = email.substr(0,pos);//��˼�Ǵӵ�һ���ַ���ȡ��pos��ǰһ��
	cout << "str2=" << str2 << endl;
}
int main()
{

	//test01();
	test02();
	system("pause");
	return 0;
}
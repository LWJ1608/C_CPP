#include<iostream>
using namespace std;
#include<string>
//string�ַ����Ƚ�

void test01()
{
	string str1 = "halle";
	string str2 = "halloe";

	int pos = str1.compare(str2);
	if (pos == 0)
	{
		cout << "�����ַ�����ȡ�" << endl;
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
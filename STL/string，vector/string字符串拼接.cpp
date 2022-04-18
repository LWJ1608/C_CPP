#include<iostream>
using namespace std;
#include<string>
//string字符串的拼接(其实就是对+=符号进行重载)

void test01()
{

	string str2 = "LOL DNF";
	string str3 = "I";
	str3.append(" love ");
	str3.append("game abcde", 4);
	//str3.append(str2);
	str3.append(str2, 4, 3); // 从下标4位置开始 ，截取3个字符，拼接到字符串末尾
	cout << "str3 = " << str3 << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}
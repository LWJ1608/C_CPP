#include<iostream>
using namespace std;
#include<string>
//string��ֵ����

//* `string& operator=(const char* s); `             //char*�����ַ��� ��ֵ����ǰ���ַ���
//* `string& operator=(const string& s); `         //���ַ���s������ǰ���ַ���
//* `string& operator=(char c); `                          //�ַ���ֵ����ǰ���ַ���
//* `string& assign(const char* s); `                  //���ַ���s������ǰ���ַ���
//* `string& assign(const char* s, int n); `     //���ַ���s��ǰn���ַ�������ǰ���ַ���
//* `string& assign(const string& s); `              //���ַ���s������ǰ�ַ���
//* `string& assign(int n, char c); `                  //��n���ַ�c������ǰ�ַ���

void test01()
{
	string str1;
	str1 = "99"; 
	cout << "str1 =" << str1<< endl;

	string str2;
	str2 =str1;
	cout << "str2 =" << str1 << endl;
    
	string str3;
	str3 = 'a';
	cout << "str3 =" << str3 << endl;

	string str4;
	str3.assign("come on");
	cout << "str4 =" << str3 << endl;

	string str5;
	str5.assign("come on", 5);
	cout << "str5 =" << str5 << endl;

	string str7;
	str7.assign(5, '0');
	cout << "str7 = " << str7 << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}
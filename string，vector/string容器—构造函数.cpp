#include<iostream>
using namespace std;
#include<string>
//string���� ���캯��
void test01()
{

	string s1;//Ĭ�Ϲ���
	const char *v1 = "hello world!";

	string s2(v1);
	cout << "s2=" <<s2 << endl;

	string s3(s2);
	cout << "s3=" << s3 << endl;

	string s4(10,'a');
	cout << "s4=" <<s4<< endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}
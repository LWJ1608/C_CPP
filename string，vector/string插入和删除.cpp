
#include<iostream>
using namespace std;
#include<string>
//�ַ����Ĳ����ɾ��
void test01()
{
	string str1 = "hello";
	//����
	str1.insert(1, "p");
	cout << "str1=" << str1 << endl;
	//ɾ��
	str1.erase(1,1);
	cout << str1 << endl;
}
int main()
{

	test01();
	//test02();
	system("pause");
	return 0;
}
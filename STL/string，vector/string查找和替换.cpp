#include<iostream>
using namespace std;
#include<string>
//string���Һ��滻
//* `int find(const string& str, int pos = 0) const; `              //����str��һ�γ���λ��,��pos��ʼ����
//* `int find(const char* s, int pos = 0) const; `                     //����s��һ�γ���λ��,��pos��ʼ����
//* `int find(const char* s, int pos, int n) const; `               //��posλ�ò���s��ǰn���ַ���һ��λ��
//* `int find(const char c, int pos = 0) const; `                       //�����ַ�c��һ�γ���λ��
//* `int rfind(const string& str, int pos = npos) const; `      //����str���һ��λ��,��pos��ʼ����
//* `int rfind(const char* s, int pos = npos) const; `              //����s���һ�γ���λ��,��pos��ʼ����
//* `int rfind(const char* s, int pos, int n) const; `              //��pos����s��ǰn���ַ����һ��λ��
//* `int rfind(const char c, int pos = 0) const;  `                      //�����ַ�c���һ�γ���λ��
//* `string& replace(int pos, int n, const string& str); `       //�滻��pos��ʼn���ַ�Ϊ�ַ���str
//* `string& replace(int pos, int n, const char* s); `                 //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s


//����
void test01()
{
	string str1="come on,c++";
	int pos = str1.find("on");

	
	pos = str1.rfind("on");
	if (pos == -1)
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "pos = " << pos << endl;
	}
}
//�滻
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
#include<iostream>
using namespace std;
#include<string>
//string�ַ�����ƴ��(��ʵ���Ƕ�+=���Ž�������)

void test01()
{

	string str2 = "LOL DNF";
	string str3 = "I";
	str3.append(" love ");
	str3.append("game abcde", 4);
	//str3.append(str2);
	str3.append(str2, 4, 3); // ���±�4λ�ÿ�ʼ ����ȡ3���ַ���ƴ�ӵ��ַ���ĩβ
	cout << "str3 = " << str3 << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}
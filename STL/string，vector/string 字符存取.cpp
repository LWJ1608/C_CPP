#include<iostream>
using namespace std;
#include<string>

//string�ַ���ȡ(ʵ�ʾͶ�[]���Ž�������ʵ�ֵĹ���)
void test01()
{
	string str = "hello";
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;
	//�޸��ַ�
	str[0] = 'H';
	cout << "str=" << str << endl;
	//ͨ��string�����е�at�����޸��ַ�
	str.at(1) = 'E';
	cout <<"str="<< str << endl;
}
int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}
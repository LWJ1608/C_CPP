#include<iostream>
using namespace std;
void show(const int &val)
{
	//val = 1000;�������
	cout << "a=" << val << endl;
}
int main()
{
	/////��������
	////ʹ�ó��������������βΣ���ֹ�����
	//int a = 10;
	////����const ֮�󣬱������������޸�Ϊint temp10;const int &ref=tenp;
	//const int& ref = 10;//���ñ�����һ��Ϸ��ռ�
	////ref = 20;����ʾ��
	////
	int a = 10;
	show(a);
}
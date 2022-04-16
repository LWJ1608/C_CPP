#include<iostream>
using namespace std;
#include<deque>

//��ӡ
void PrintDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;
	for (int i = 0; i < 8; i++)
	{
		d1.push_back(i);
	}
	PrintDeque(d1);
	if (d1.empty())
	{
		cout << "d1Ϊ�գ�" << endl;
	}
	else
	{
		cout << "d1��Ϊ�ա�" << endl;
		cout << "d1��СΪ��" << d1.size() << endl;
		//dequeû��capacity����������Ϊ�����ڲ�����
	}
	d1.resize(4, 1);
	PrintDeque(d1);
	cout << "d1��СΪ��" << d1.size() << endl;
	d1.resize(10, 0);
	PrintDeque(d1);
	cout << "d1��СΪ��" << d1.size() << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
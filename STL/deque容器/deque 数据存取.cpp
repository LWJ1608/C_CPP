#include<iostream>
using namespace std;
#include<deque>
//- `at(int idx); `     //��������idx��ָ������
//- `operator[]; `      //��������idx��ָ������
//- `front(); `         //���������е�һ������Ԫ��
//- `back(); `          //�������������һ������Ԫ��
void test01()
{
	deque<int> d1;
	deque<int>d2;
	for (int i = 0; i < 6; i++)
	{
		d1.push_back(i);
	}

	//at
	cout << "at:";
	for (int i = 0; i < d1.size(); i++)
	{
		cout<< d1.at(i)<<" ";
	}
	cout << endl;

	//operator[]
	cout << "operator[]:";
	for (int i = 1; i < d1.size(); i++)
	{
		cout << d1[i] <<" ";
	}
	cout << endl;

	////���������е�һ������Ԫ��
	cout << "d1��һ��Ԫ��: " << d1.front() << endl;
	cout << "d1���һ��Ԫ��: " << d1.back() << endl;

}
int main()
{
	test01();
	system("pause");
	return 0;
}

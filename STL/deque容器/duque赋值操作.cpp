#include<iostream>
using namespace std;
#include<deque>

//��ӡ
void PrintDuque(const deque<int>& d)//const������ֹ�޸ģ����������ҲҪ�޸�Ϊconst_iterator
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;���������ڲ����޸�
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
	PrintDuque(d1);
	//operator= ��ֵ
	deque<int> d2;
	d2 = d1;
	PrintDuque(d2);

	//�������丳ֵ
	deque<int> d3;
	d3.assign(d2.begin(),d2.end());
	PrintDuque(d3);

	//ʹ��assign����10��100
	deque<int> d4;
	d4.assign(10, 100);
	PrintDuque(d4);
}
int main()
{
	test01();

	system("pause");
	return 0;
}
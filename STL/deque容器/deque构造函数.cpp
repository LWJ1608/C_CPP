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
//duque���캯��
void test01()
{
	//��ͨ����
	deque<int> d1;
	for (int i = 0; i < 8; i++)
	{
		d1.push_back(i);
	}
	PrintDuque(d1);

	//����v1��begin��end֮�������
	deque<int> d2(d1.begin(), d1.end());
	PrintDuque(d2);

	//�������캯��
	deque<int> d3(d2);
	PrintDuque(d3);

	deque<int>d4(10, 100);//��d4����10��100
	PrintDuque(d4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include<deque>

//��ӡ
void printDeque(const deque<int> &d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//����
void test01()
{
	deque<int> d1;
	deque<int>d2;
	for (int i = 0; i < 4; i++)
	{
		d2.push_back(0);
	}
	d1.push_back(9);//β��
	d1.push_back(9);//β��
	d1.push_back(9);//β��
	d1.push_back(9);//β��
	d1.push_front(8);//ͷ��
	d1.push_front(8);//ͷ��
	d1.push_front(8);//ͷ��
	d1.push_front(8);//ͷ��
	printDeque(d1);

	//ָ��λ�ò��룺
	d1.insert(d1.begin(), 1);
	cout << "��begin���λ�ò���1��" << endl;
	printDeque(d1);
	cout << "��begin���λ�ò���2��2��" << endl;
	d1.insert(d1.begin(), 2, 2);
	printDeque(d1);
	cout << "��begin���λ�ò���[begin,end]��������ݺ�" << endl;
	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);
}
//ɾ��
void test02()
{
	deque<int> d1;
	deque<int>d2;
	deque<int>d3;

	for (int i = 0; i < 8; i++)
	{
		d1.push_back(i);
	}
	d3 = d2 = d1;
	d1.pop_front();//ͷɾ
	d1.pop_back();//βɾ
	printDeque(d1);

	d1.erase(d1.begin(),d1.end());
	printDeque(d1);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
#include<vector>

//vector������ֵ

//��ӡ����Ԫ��
void PrintVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int>v1;//�޲ι���
	for (int i = 0; i < 9; i++)//ͨ��push_Back()��ֵ
	{
		v1.push_back(i);
	}
	PrintVector(v1);

	vector<int> v2;
	v2 = v1;//ͨ�������� operator= ��ֵ
	PrintVector(v2);

	vector<int> v3;
	v3.assign(v2.begin(), v2.end());//�����䴫��assign������ֵ
	PrintVector(v3);

	vector<int>v4;
	v4.assign(4, 10);//����assign����4��10������������
	PrintVector(v4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
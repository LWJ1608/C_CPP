#include<iostream>
using namespace std;
#include<vector>


//��ӡ����Ԫ��
void PrintVector(vector<int> v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}
	if (v1.empty())
	{
		cout << "v1Ϊ�գ�" << endl;
	}
	else
	{
		cout << "v1��Ϊ�ա�" <<endl;
		cout << "v1����Ϊ��" << v1.capacity() << endl;
		cout << "v1��СΪ��" << v1.size() << endl;
	}
	//resize()�������¶���v1����������ԭ�������ݿ����������ͷ�ԭ�ռ�
	//resize ����ָ����С ����ָ���ĸ���Ĭ����0�����λ�ã������������ذ汾�滻Ĭ�����
	v1.resize(10, 1);//��������Ϊ10��ʣ��ռ���1���
	PrintVector(v1);
	cout << "v1�ض�����Ŀռ�" << endl;
	cout << "v1����Ϊ��" << v1.capacity() << endl;
	cout << "v1��СΪ��" << v1.size() << endl;

	v1.resize(4);//�����СΪ4���ռ���������ԭ��
	cout << "v1����Ϊ��" << v1.capacity() << endl;
	cout << "v1��СΪ��" << v1.size() << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
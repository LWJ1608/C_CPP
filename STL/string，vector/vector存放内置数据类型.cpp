#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


void Print(int val)
{
	cout << val<<endl;
}

//vector�������������������
void test01()
{
	vector<int> v;
	//�������в�������
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);	
	v.push_back(4);
	v.push_back(5);

	//ͨ�����������������е�����

	//vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ�������ĵ�һ��Ԫ��
	//vector<int>::iterator itEnd = v.end();//������������ָ�����������һ��Ԫ�ص���һ��
	//��һ�ֱ�����ʽ
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	*itBegin++;
	//}

	//�ڶ��ֱ�����ʽ
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}
	
	//�����ֱ�����ʽ   ����STL�ṩ�ı����㷨
	for_each(v.begin(), v.end(), Print);

}
int main()
{
	test01();
	system("pause");
	return 0;
}
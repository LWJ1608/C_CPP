#include<iostream>
using namespace std;
#include<vector>

//* `push_back(ele); `                                //β������Ԫ��ele
//* `pop_back(); `                                    //ɾ�����һ��Ԫ��
//* `insert(const_iterator pos, ele); `               //������ָ��λ��pos����Ԫ��ele
//* `insert(const_iterator pos, int count, ele); `    //������ָ��λ��pos����count��Ԫ��ele
//* `erase(const_iterator pos); `                     //ɾ��������ָ���Ԫ��
//* `erase(const_iterator start, const_iterator end); //ɾ����������start��end֮���Ԫ��
//* `clear(); `                                       //ɾ������������Ԫ��

//��ӡ����Ԫ��
void PrintVector(vector<int> v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;
	for (int i = 1; i < 5; i++)
	{
		v1.push_back(i);
	}
	PrintVector(v1);//����

	v1.pop_back();//βɾ
	PrintVector(v1);

	v1.insert(v1.begin(),88);//��һ���ǵ��������ڶ����ǲ��������
	PrintVector(v1);

	v1.insert(v1.begin(), 2, 99);//�ڵ�����λ�ò���2��99
	PrintVector(v1);

	v1.erase(v1.begin(), v1.end());//���
	PrintVector(v1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
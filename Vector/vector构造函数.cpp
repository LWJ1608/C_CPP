#include<iostream>
using namespace std;
#include<vector>
//vector���캯��

//*`vector<T > v; `               		     //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
//* `vector(v.begin(), v.end());   `       //��v[begin(), end())�����е�Ԫ�ؿ���������
//* `vector(n, elem); `                            
//* `vector(const vector& vec); `         //�������캯����


//��ӡvector��������
// ����һ��
//void PrintVector(vector<int>& v)
//{
//	cout << "����Ԫ�أ�" << endl;
//	for (int j = 0; j < v.size(); j++)
//	{
//		cout << v[j] << " ";
//	}
//	cout << endl;
//}
//��������
void PrintVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
}
void test01()
{
	vector<int> v1;//Ĭ�Ϲ��캯�����޲ι���
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	PrintVector(v1);

	vector<int> v2(v1.begin(), v1.end());//�вι���
	PrintVector(v2);

	vector<int>v3(4, 10);//���캯����n��elem����������
	PrintVector(v3);

	vector<int> v4(v3);//�������캯��
	PrintVector(v4);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
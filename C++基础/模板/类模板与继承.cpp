#include<iostream>
using namespace std;

//��ģ����̳�
template<class T>
class base
{
public:
	T m;
};
//class son:public base//��������̳�ģ�常�������������ͨ������
class son:public base<int>
{
};
void test01()
{
	son p;
}
//��Ҫ�����ָ�������͵Ļ�������ҲҪ�����ģ��
template<class T1,class T2>//T2����������ʾ�����ͨ������
class son1 :public base<T2>
{
public:
	son1()
	{
		cout << "T1:" << typeid(T1).name() << endl;
		cout << "T2:" << typeid(T2).name() << endl;
	}
};
void test02()
{
	son1 <char, int > t;
}
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
//++,--���������
class Math
{
	friend ostream& operator<<(ostream& cout, Math p);
public:
	Math()
	{
		this->m = 0;
	}
	//ǰ��++
	//���õ����ã�����������õĻ���ô���ƹ�������������ͬһ����
	//�����Ͳ��ܶ�һ�������ж��++��
	Math& operator++()//��Ҫ���������������Math����
	{
		///1.��++
		this->m++;
		//�ٷ���
		return *this;
	}
    //����++
	Math& operator++(int)
	{
		//�ȷ��أ�
		Math p = *this;//�ȼ�¼ԭ����ֵ����++���������Դﵽ�ȷ���ԭ����ֵ����++��Ч��
		this->m++;
		return p;
	}
	//ǰ��--
	Math& operator--()
	{
		//��--
		this->m--;
		//�ٷ���
		return *this;
	}
private:
	int m;
};

ostream& operator<<(ostream& cout, Math p)
{
	cout << "m=" << p.m << endl;
	return cout;
}
//ǰ��++ ��++ �ٷ���
void test01()
{
	Math abs;
	cout << ++abs << endl;
	cout << abs << endl;
}
//����++ �ȷ��� ��++
void test02()
{
	Math p1;
	cout << p1++ << endl;
	cout << p1 << endl;
}
//ǰ��-- ��-- �ٷ���
void test03()
{
	Math p2;
	cout << --p2 << endl;
	cout <<p2<< endl;
}
//����-- �ȷ��� ��--
void test04()
{
	Math p3;
	cout << p3-- << endl;
	cout << p3 << endl;
}
int main()
{
	test01();
	test02();
	test03();
	test04();
	system("pause");
	return 0;
}
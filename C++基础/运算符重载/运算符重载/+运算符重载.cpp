#include<iostream>
using namespace std;
//�����+����

class math
{
public:
	math() {};
	math(int a, int b)
	{
		this->m_a = a;
		this->m_b = b;
	}

	//����+�޷���һЩ�����������ͽ������㣬����������ͣ������Ҫ�ԡ�+����������
	math& operator+(const math& p)
	{
		math temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}
	int m_a;
	int m_b;
};
////ȫ�ֺ�����ʵ��+������
//math operator+(const math& p1, const math& p2)
//{
//	math p3;
//	p3.m_a = p1.m_a + p2.m_a;
//	p3.m_b = p1.m_b + p2.m_b;
//	return p3;
//}

//���غ���Ҳ���Է�������
math& operator+(const math& p, int val)
{
	math temp;
	temp.m_a = p.m_a + val;
	temp.m_b = p.m_b + val;
	return temp;
}
void test01()
{
	math p1(1, 2);
	math p2(2, 3);
	math p3 = p1 + p2;//�൱�� p2.operator(p1);
	cout << "m_a=" << p3.m_a << endl;
	cout << "m_b=" << p3.m_b << endl;
	cout << "--------------" << endl;
	math p4 = p3 + 10;//�൱�� p4.operator(p3,10);
	cout << "m_a=" << p4.m_a << endl;
	cout << "m_b=" << p4.m_b << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
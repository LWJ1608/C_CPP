#include<iostream>
using namespace std;
//��̬ʵ�ּ�������
class AbstractCalculator
{
public:
	virtual int getResult()
	{
		return 0;
	}
	int m_Nam01;
	int m_Nam02;
};
//�ӷ���
class addCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Nam01 + m_Nam02;
	}
};
//������
class subCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Nam01 - m_Nam02;
	}
};
//�˷���
class malCalculator :public AbstractCalculator
{
public:
	int getResult()
	{
		return m_Nam01 * m_Nam02;
	}
};

void test01()
{
	AbstractCalculator* abs = new addCalculator;
	abs->m_Nam01 = 100;
	abs->m_Nam02 = 100;
	cout << "m_Nam0" << "+" << "m_Nam02=" << abs->getResult()<<endl;
	delete abs;

	abs = new subCalculator;
	abs->m_Nam01 = 100;
	abs->m_Nam02 = 100;
	cout << "m_Nam0" << "-" << "m_Nam02=" << abs->getResult()<<endl;
	delete abs;
}
int main()
{
	test01();

	system("pause");
	return 0;
}
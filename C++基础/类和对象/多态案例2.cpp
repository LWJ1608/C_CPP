#include<iostream>
using namespace std;
//������Ʒ��
class Dodrinking
{
public:
	//1.��ˮ
	virtual void Boil() = 0;
	//2.����
	virtual void Brew() = 0;
	//3.���뱭��
	virtual void PourInCup() = 0;
	//4.����
	virtual void PutSomething() = 0;
	void makeDrinking()
	{
		//1.��ˮ
		 Boil();
		//2.����
	     Brew();
		//3.���뱭��
		 PourInCup();
		//4.����
		 PutSomething();
		 cout << "lll";
	}
};
class Tea :public Dodrinking
{
public:
	
	//1.��ˮ
	virtual	void Boil()
	{
		cout << "����ˮ" << endl;
	}
	//2.���ݲ�
	virtual	void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	//3.���뱭��
	virtual void PourInCup()
	{
		cout << "���赹�뱭��" << endl;
	}
	//4.������
	virtual	void PutSomething()
	{
		cout << "�ڲ��м�������" << endl;
	}

};
//ҵ����
void dowork(Dodrinking *drink)
{
	drink->makeDrinking();
	delete drink;
	cout << "oooo";

}
void test01()
{
	dowork(new Tea);
	cout << "jjj" << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
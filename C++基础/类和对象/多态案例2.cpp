#include<iostream>
using namespace std;
//制作饮品类
class Dodrinking
{
public:
	//1.煮水
	virtual void Boil() = 0;
	//2.冲泡
	virtual void Brew() = 0;
	//3.倒入杯中
	virtual void PourInCup() = 0;
	//4.加料
	virtual void PutSomething() = 0;
	void makeDrinking()
	{
		//1.煮水
		 Boil();
		//2.冲泡
	     Brew();
		//3.倒入杯中
		 PourInCup();
		//4.加料
		 PutSomething();
		 cout << "lll";
	}
};
class Tea :public Dodrinking
{
public:
	
	//1.煮水
	virtual	void Boil()
	{
		cout << "先煮水" << endl;
	}
	//2.冲泡茶
	virtual	void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	//3.倒入杯中
	virtual void PourInCup()
	{
		cout << "将茶倒入杯中" << endl;
	}
	//4.加柠檬
	virtual	void PutSomething()
	{
		cout << "在茶中加入柠檬" << endl;
	}

};
//业务函数
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
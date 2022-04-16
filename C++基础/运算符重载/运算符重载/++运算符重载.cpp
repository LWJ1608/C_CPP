#include<iostream>
using namespace std;
//++,--运算符重载
class Math
{
	friend ostream& operator<<(ostream& cout, Math p);
public:
	Math()
	{
		this->m = 0;
	}
	//前置++
	//引用的作用，如果不用引用的话那么复制过来的是数不是同一个数
	//这样就不能对一个数进行多次++了
	Math& operator++()//需要返回类对象，所以用Math声明
	{
		///1.先++
		this->m++;
		//再返回
		return *this;
	}
    //后置++
	Math& operator++(int)
	{
		//先返回，
		Math p = *this;//先记录原来的值，再++，怎样可以达到先返回原来的值，后++的效果
		this->m++;
		return p;
	}
	//前置--
	Math& operator--()
	{
		//先--
		this->m--;
		//再返回
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
//前置++ 先++ 再返回
void test01()
{
	Math abs;
	cout << ++abs << endl;
	cout << abs << endl;
}
//后置++ 先返回 再++
void test02()
{
	Math p1;
	cout << p1++ << endl;
	cout << p1 << endl;
}
//前置-- 先-- 再返回
void test03()
{
	Math p2;
	cout << --p2 << endl;
	cout <<p2<< endl;
}
//后置-- 先返回 再--
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
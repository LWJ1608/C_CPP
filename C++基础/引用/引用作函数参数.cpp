#include<iostream>
using namespace std;
void swap01(int a, int b)//值传递
{
	int temp=a;
	a = b;
	b = temp;

}
void swap02(int *a,int *b)//地址传递
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
void swap03(int &a, int &b)//引用传递
{
	int temp = a;
	a = b;
	b = temp;

}
int main()
{
	int a = 10;
	int b = 20;
	//swap01(a, b);//值传递，形参不会修饰实参
	//swap02(&a, &b);//地址传递，形参会修饰实参
	swap03(a, b);//引用传递，形参会修饰实参
	cout << a << endl;
	cout << b << endl;
	return 0;
}
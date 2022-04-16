#include<iostream>
using namespace std;
#include"seqStack.hpp"

void convert01()//十进制数转换为八位进制数
{
	int a, b;
	seqStack<int> S1;
	cout << "请输入一个十进制的数字：" << endl;
	cin >> a;
	while (a!=0)
	{
		S1.push(a % 8);
		a = a / 8;
	}
	while (!S1.empty())
	{
		b = S1.pop();
		cout << b;
	}
	cout << endl;
}

void convert02(int n)//十进制转换为八进制（递归算法）
{
	if (n != 0)
	{
		convert02(n/8);
		printf("%d", n % 8);
	}
	cout << endl;








}

int main()
{
	//convert01();
	convert02(159);
	system("pause");
	return 0;
}
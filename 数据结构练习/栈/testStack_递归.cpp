#include<iostream>
using namespace std;
#include"seqStack.hpp"

void convert01()//ʮ������ת��Ϊ��λ������
{
	int a, b;
	seqStack<int> S1;
	cout << "������һ��ʮ���Ƶ����֣�" << endl;
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

void convert02(int n)//ʮ����ת��Ϊ�˽��ƣ��ݹ��㷨��
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
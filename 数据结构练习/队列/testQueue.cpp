#include<iostream>
using namespace std;
#include"seqQueue.hpp"
#include"linkQueue.hpp"

template<class T>
void testQuence(Queue<T> &p)
{
	cout << "插入和取出测试：" << endl;
	for (int i = 0; i < 4; i++)
	{
		p.enQueue(i);
	}
	cout << "队列大小为：" << p.size() << endl;
	while (!p.empty())
	{
		cout << p.deQueue() << " ";
	}
	cout << endl;
	cout << "队首值为："<< p.getHead()<<endl;
	
}

int main()
{
	seqQueue<int> s1;
	linkQueue<int> s2;
	testQuence(s1);
	testQuence(s2);
	system("pause");
	return 0;
}
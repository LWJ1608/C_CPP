#include<iostream>
using namespace std;
#include<list>

//list������ת������

//��ӡlist����
void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	list<int> L1;
	L1.push_back(30);
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(40);
	printList(L1);
	//��תreverse
	L1.reverse();
	printList(L1);
	//����sort
	L1.sort();
	printList(L1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
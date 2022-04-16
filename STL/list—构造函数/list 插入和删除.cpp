#include<iostream>
using namespace std;
#include<list>
//* push_back(elem);//在容器尾部加入一个元素
//*pop_back();//删除容器中最后一个元素
//*push_front(elem);//在容器开头插入一个元素
//*pop_front();//从容器开头移除第一个元素
//*insert(pos, elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
//*insert(pos, n, elem);//在pos位置插入n个elem数据，无返回值。
//*insert(pos, beg, end);//在pos位置插入[beg,end)区间的数据，无返回值。
//*clear();//移除容器的所有数据
//*erase(beg, end);//删除[beg,end)区间的数据，返回下一个数据的位置。
//*erase(pos);//删除pos位置的数据，返回下一个数据的位置。
//*remove(elem);//删除容器中所有与elem值匹配的元素。

//打印list容器
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
	for (int i = 0; i < 8; i++)
	{
		L1.push_back(i);
	}
	printList(L1);
	L1.push_back(9);//尾插
	L1.push_front(0);//头插
	cout << "在尾插入后：" << endl;
	printList(L1);
	cout << "头删除后：" << endl;
	L1.pop_back();//删头
	L1.pop_front();//删尾
	printList(L1);

	//用insert插入
	list<int>::iterator it = L1.begin();//list<int>::iterator定义一个迭代器
	L1.insert(++it,8);//it++是迭代器，在it++这个位置插入一个8
	printList(L1);
	//用erase删除
	L1.erase(--it);
	printList(L1);

	//remove 移除指定的元素
	L1.remove(0);
	printList(L1);
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}
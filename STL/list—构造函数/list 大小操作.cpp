#include<iostream>
using namespace std;
#include<list>

//* `size(); `                //返回容器中元素的个数
//* `empty(); `               //判断容器是否为空
//* `resize(num); `           //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//* `resize(num, elem); `     //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//                            //如果容器变短，则末尾超出容器长度的元素被删除。

//打印list容器
void printList(const list<int> L)
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
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);
	printList(L1);
	while (!L1.empty())
	{
		cout << "list容器大小为：" << L1.size() << endl;
		break;
	}
	L1.resize(6);//扩大容量后默认在空余的位置插入0
	cout << "扩大容量后：" << L1.size() << endl;
	printList(L1);
	L1.resize(3);//缩小大小后会把尾部多出来元素删除掉
	cout << "缩小容量后：" << L1.size() << endl;
	printList(L1);
}
//int main()
//{
//	//test01();
//	system("pause");
//	return 0;
//}
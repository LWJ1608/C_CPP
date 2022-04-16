#include<iostream>
using namespace std;
#include"seqList.hpp"
#include"linkList.hpp"
#include"doubleLinkList.hpp"

void testSeqList()
{
	seqList<int> s1;
	seqList<int> s2;

	cout << "insert插入测试：" << endl;
	for (int i = 0; i < 10; i++)
	{
		s1.insert(i, i);
		s2.insert(i, 99);
	}
	s1.traverse();

	cout << "测试返回表大小函数size（）：" <<s1.size()<< endl;
	
	
	cout << "拷贝构造函数测试：" << endl;
	//s2 = s1;
	//s2.traverse();

	//cout << "表满扩大容量函数resize():" << endl;
	//cout << "未扩大表时的容量：" << s1.size() << endl;
	//for (int i = 0; i < 10; i++)
	//{
	//	s1.insert(0, 88);
	//}
	//cout << "扩大表后容量为：" << s1.size() << endl;
	//s1.traverse();

	//cout << "测试删除元素函数remove()：" << endl;
	//s1.remove(s1.size());
	//s1.traverse();

	//cout << "测试visit()功能：" << s1.visit(5) << endl;

	//cout << "测试查找value元素功能：" << s1.search(4)<<" "<<s1.search(99)<< endl;

	//cout << "测试逆置功能：" << endl;
	//s1.inverse();
	//s1.traverse();

	cout << "测试s2表插入s1表：" << endl;
	s1.Union(s2);
	s1.traverse();
}


void testlinkList()
{
	linkList<int> L1;
	linkList<int> L2;

	cout << "插入测试：" << endl;
	for (int i = 0; i < 4; i++)
	{
		L1.insert(i, i);
		L2.insert(i, i);
	}

	cout << "测试插入操作：" << endl;
	L1.insert(2, 99);
	L1.traverse();

	cout << "测试判空和返回单链表大小：" << endl;
	if (L1.empty())
	{
		cout << "单链表为空！" << endl;
	}
	else
	{
		cout << "单链表不为空,其大小为：" << L1.size() << endl;
	}
	 
	cout << "测试删除功能：" << endl;
	L1.remove(2);
	L1.traverse();

	cout << "测试查找位序为2的元素的值：" << endl;
	//L1.clear();
	cout << L1.visit(2) << endl;

	//cout << "头插法测试：" << endl;
	//L1.headCreate();
	//L1.traverse();
	cout << "测试逆置操作：" <<endl;
	L1.inverse();
	L1.traverse();

	cout << "测试两个单链表合并操作：" << endl;
	L1.Union(& L2)->traverse();
}

void doubleLinkList_test()
{
	doubleLinkList<int> d1;

	for (int i = 0; i < 4; i++)
	{
		d1.insert(i, i);
	}
	cout << "判空和返回大小测试：" << endl;
	if (d1.empty())
	{ cout << "双链表为空！" << endl; }
	else 
	{	cout << d1.size()<< endl;}
	d1.traverse();

	cout << "删除函数r emove()的测试：" << endl;
	d1.remove(1);
	d1.traverse();

	cout << "search()函数的测试：" << endl;

	cout << "元素3第一次出现的位序为：" << d1.search(3) << endl;

	cout << "测试逆置功能：" << endl;
	d1.inverse();
	d1.traverse();
}
int main()
{
	//testSeqList();//顺序表测试

	testlinkList();//单链表测试

	//doubleLinkList_test();//双链表测试
	system("pause");
	return 0;
}




//#include<iostream>
//using namespace std;
//#include"seqStack.hpp"
//#include"linkStack.hpp"
//
//template<class T>
//void PrintStack(int len,seqStack<T> &s)              //打顺序栈元素
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout<<s.pop()<<" ";
//	}
//	cout << endl;
//}
//
//template<class T>
//void Print_Stack(int len,linkStack<T>& s)              //打链栈元素
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << s.pop() << " ";
//	}
//	cout << endl;
//}
//
//void testSeqStack()
//{
//	seqStack<int> s1;
//	cout << "测试进栈操作：" << endl;
//	for (int i = 0; i < 3; i++)
//	{
//		s1.push(i);
//	}
//	//PrintStack<int>(s1.size(),s1);
//	//cout << "测试扩大空间后的容量：" <<s1.getMax()<< endl;
//
//	if (!s1.empty())
//	{
//		s1.clear();
//	}
//	cout << "返回当前元素个数：" << s1.size() << endl;
//}
//
//void testLinkStack()
//{
//	linkStack<int> L1;
//	cout << "测试进栈操作：" << endl;
//	for (int i = 0; i < 4; i++)
//	{
//		L1.push(i);
//	}
//	//Print_Stack(L1.size(),L1);
//	cout << "测试返回链栈大小操作：" << endl;
//	cout << L1.size() << endl;
//
//}
//
//int main()
//{
//	//testSeqStack();
//	testLinkStack();
//	system("pause");
//	return 0;
//}
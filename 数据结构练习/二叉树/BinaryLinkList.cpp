/**
* @authtor liaoWangjun
* 修改日期：2022年3月6日
* 二叉树功能测试
**/
#include<iostream>
#include"BinaryLinkList.hpp"

using namespace std;

int main()
{
	BinaryLinkList<char> T1;
	cout << "前序排序法创建二叉树：" << endl;
	T1.preOrderCreate('*');
	cout << "前序排序法输出二叉树：" << endl;
	T1.preOrderTraverse();
	cout << "中序排序法输出二叉树：" << endl;
	T1.inOrderTraverse();
	cout << "后序排序法输出二叉树：" << endl;
	T1.postOrderTraverse();
	cout << "层次排序法输出二叉树：" << endl;
	T1.levelOrderTraverse();
	cout << "二叉树的结点数：" << endl;
	T1.size();
	cout << "二叉树的高度：" << endl;
	T1.height();
	system("pause");
	return 0;
}

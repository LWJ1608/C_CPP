/**
* @authtor liaoWangjun
* �޸����ڣ�2022��3��6��
* ���������ܲ���
**/
#include<iostream>
#include"BinaryLinkList.hpp"

using namespace std;

int main()
{
	BinaryLinkList<char> T1;
	cout << "ǰ�����򷨴�����������" << endl;
	T1.preOrderCreate('*');
	cout << "ǰ�����������������" << endl;
	T1.preOrderTraverse();
	cout << "�������������������" << endl;
	T1.inOrderTraverse();
	cout << "�������������������" << endl;
	T1.postOrderTraverse();
	cout << "������������������" << endl;
	T1.levelOrderTraverse();
	cout << "�������Ľ������" << endl;
	T1.size();
	cout << "�������ĸ߶ȣ�" << endl;
	T1.height();
	system("pause");
	return 0;
}

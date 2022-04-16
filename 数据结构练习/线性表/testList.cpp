#include<iostream>
using namespace std;
#include"seqList.hpp"
#include"linkList.hpp"
#include"doubleLinkList.hpp"

void testSeqList()
{
	seqList<int> s1;
	seqList<int> s2;

	cout << "insert������ԣ�" << endl;
	for (int i = 0; i < 10; i++)
	{
		s1.insert(i, i);
		s2.insert(i, 99);
	}
	s1.traverse();

	cout << "���Է��ر��С����size������" <<s1.size()<< endl;
	
	
	cout << "�������캯�����ԣ�" << endl;
	//s2 = s1;
	//s2.traverse();

	//cout << "����������������resize():" << endl;
	//cout << "δ�����ʱ��������" << s1.size() << endl;
	//for (int i = 0; i < 10; i++)
	//{
	//	s1.insert(0, 88);
	//}
	//cout << "����������Ϊ��" << s1.size() << endl;
	//s1.traverse();

	//cout << "����ɾ��Ԫ�غ���remove()��" << endl;
	//s1.remove(s1.size());
	//s1.traverse();

	//cout << "����visit()���ܣ�" << s1.visit(5) << endl;

	//cout << "���Բ���valueԪ�ع��ܣ�" << s1.search(4)<<" "<<s1.search(99)<< endl;

	//cout << "�������ù��ܣ�" << endl;
	//s1.inverse();
	//s1.traverse();

	cout << "����s2�����s1��" << endl;
	s1.Union(s2);
	s1.traverse();
}


void testlinkList()
{
	linkList<int> L1;
	linkList<int> L2;

	cout << "������ԣ�" << endl;
	for (int i = 0; i < 4; i++)
	{
		L1.insert(i, i);
		L2.insert(i, i);
	}

	cout << "���Բ��������" << endl;
	L1.insert(2, 99);
	L1.traverse();

	cout << "�����пպͷ��ص������С��" << endl;
	if (L1.empty())
	{
		cout << "������Ϊ�գ�" << endl;
	}
	else
	{
		cout << "������Ϊ��,���СΪ��" << L1.size() << endl;
	}
	 
	cout << "����ɾ�����ܣ�" << endl;
	L1.remove(2);
	L1.traverse();

	cout << "���Բ���λ��Ϊ2��Ԫ�ص�ֵ��" << endl;
	//L1.clear();
	cout << L1.visit(2) << endl;

	//cout << "ͷ�巨���ԣ�" << endl;
	//L1.headCreate();
	//L1.traverse();
	cout << "�������ò�����" <<endl;
	L1.inverse();
	L1.traverse();

	cout << "��������������ϲ�������" << endl;
	L1.Union(& L2)->traverse();
}

void doubleLinkList_test()
{
	doubleLinkList<int> d1;

	for (int i = 0; i < 4; i++)
	{
		d1.insert(i, i);
	}
	cout << "�пպͷ��ش�С���ԣ�" << endl;
	if (d1.empty())
	{ cout << "˫����Ϊ�գ�" << endl; }
	else 
	{	cout << d1.size()<< endl;}
	d1.traverse();

	cout << "ɾ������r emove()�Ĳ��ԣ�" << endl;
	d1.remove(1);
	d1.traverse();

	cout << "search()�����Ĳ��ԣ�" << endl;

	cout << "Ԫ��3��һ�γ��ֵ�λ��Ϊ��" << d1.search(3) << endl;

	cout << "�������ù��ܣ�" << endl;
	d1.inverse();
	d1.traverse();
}
int main()
{
	//testSeqList();//˳������

	testlinkList();//���������

	//doubleLinkList_test();//˫�������
	system("pause");
	return 0;
}




#include<iostream>
using namespace std;
#include<list>

//* `size(); `                //����������Ԫ�صĸ���
//* `empty(); `               //�ж������Ƿ�Ϊ��
//* `resize(num); `           //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
//* `resize(num, elem); `     //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�
//                            //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

//��ӡlist����
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
		cout << "list������СΪ��" << L1.size() << endl;
		break;
	}
	L1.resize(6);//����������Ĭ���ڿ����λ�ò���0
	cout << "����������" << L1.size() << endl;
	printList(L1);
	L1.resize(3);//��С��С����β�������Ԫ��ɾ����
	cout << "��С������" << L1.size() << endl;
	printList(L1);
}
//int main()
//{
//	//test01();
//	system("pause");
//	return 0;
//}
#include<iostream>
using namespace std;
#include<list>
//* push_back(elem);//������β������һ��Ԫ��
//*pop_back();//ɾ�����������һ��Ԫ��
//*push_front(elem);//��������ͷ����һ��Ԫ��
//*pop_front();//��������ͷ�Ƴ���һ��Ԫ��
//*insert(pos, elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
//*insert(pos, n, elem);//��posλ�ò���n��elem���ݣ��޷���ֵ��
//*insert(pos, beg, end);//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//*clear();//�Ƴ���������������
//*erase(beg, end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//*erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//*remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�

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
	for (int i = 0; i < 8; i++)
	{
		L1.push_back(i);
	}
	printList(L1);
	L1.push_back(9);//β��
	L1.push_front(0);//ͷ��
	cout << "��β�����" << endl;
	printList(L1);
	cout << "ͷɾ����" << endl;
	L1.pop_back();//ɾͷ
	L1.pop_front();//ɾβ
	printList(L1);

	//��insert����
	list<int>::iterator it = L1.begin();//list<int>::iterator����һ��������
	L1.insert(++it,8);//it++�ǵ���������it++���λ�ò���һ��8
	printList(L1);
	//��eraseɾ��
	L1.erase(--it);
	printList(L1);

	//remove �Ƴ�ָ����Ԫ��
	L1.remove(0);
	printList(L1);
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}
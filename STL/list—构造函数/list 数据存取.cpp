#include<iostream>
using namespace std;
#include<list>


void test01()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(20);
	L1.push_back(20);
	L1.push_back(70);

	//cout << at(1) << endl;//���� list����֧��at��ʽ��������
	//cout << L1[1] << endl;//list������֧��[]�ķ�ʽ��������
	cout << L1.back() << endl;//�������һ��Ԫ��
	cout << L1.front() << endl;//���ص�һ��Ԫ��
	
	//list������˫�����������֧���������
	list<int>::iterator it = L1.begin();
	//it = it + 1;////����list���� ������Ծ���ʣ�+1Ҳ����
}
int main()
{
	test01();
	system("pause");
	return 0;
}
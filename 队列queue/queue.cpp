#include<iostream>
using namespace std;
#include<queue>

//����
//- `queue<T > que; `                                 //queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
//- `queue(const queue & que); `            //�������캯��
//
//��ֵ������
//
//- `queue& operator=(const queue & que); `           //���صȺŲ�����
//
//���ݴ�ȡ��
//
//- `push(elem); `                             //����β���Ԫ��
//- `pop(); `                                      //�Ӷ�ͷ�Ƴ���һ��Ԫ��
//- `back(); `                                    //�������һ��Ԫ��
//- `front(); `                                  //���ص�һ��Ԫ��
//
//��С������
//
//- `empty(); `            //�ж϶�ջ�Ƿ�Ϊ��
//- `size(); `              //����ջ�Ĵ�С
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

void test01()
{
	Person p1("����", 33);
	Person p2("����", 53);
	Person p3("����", 55);
	queue<Person> q;

	q.push(p1);////����β���Ԫ��
	q.push(p2);
	q.push(p3);
	q.pop();//��ȥ��β��Ԫ��
	//q.back();//���ض�βԪ��
	//q.front();//���ض�ͷ��Ԫ��
	while (!q.empty())
	{
		cout << "���д�СΪ��" << q.size() << endl;
		cout << "��һ���˵���Ϣ������ " << q.front().m_name << " ���� " << q.front().m_age << endl;
		cout << "��һ���˵���Ϣ������ " << q.back().m_name << " ���� " << q.back().m_age << endl;
		return ;
	}

}
int main()
{
	test01();
	system("pause");
	return 0;
}

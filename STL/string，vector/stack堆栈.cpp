#include<iostream>
using namespace std;
#include<stack>
//* `push(elem); `      //��ջ�����Ԫ��
//* `pop(); `                //��ջ���Ƴ���һ��Ԫ��
//* `top(); `                //����ջ��Ԫ��
//
//��С������
//
//* `empty(); `            //�ж϶�ջ�Ƿ�Ϊ��
//* `size(); `              //����ջ�Ĵ�С
//��ջ
void test01()
{
	stack<int> s;
	s.push(10);
	s.push(12);
	s.push(13);
	
	s.pop();
	cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;
	//��С����
	if (s.empty())
	{
		cout << "ջΪ��" << endl;
	}
	else
	{
		cout << "ջ��СΪ��" << s.size() << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
//��̬

class Animal
{
	//Speak���������麯��
    //����ǰ�����virtual�ؼ��֣�����麯������ô�������ڱ����ʱ��Ͳ���ȷ�����������ˡ�
public:
	virtual void speak()
	{
	cout<< "������˵����" << endl;
	}

};
class Cat:public Animal
{
public:
	void speak()
	{
		cout << "è��˵����" << endl;
	}

};
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "����˵����" << endl;
	}

};
void doSpeker(Animal &animal)
{
	animal.speak();
}
//��̬���������� 
//1���м̳й�ϵ
//2��������д�����е��麯��
//��̬ʹ�ã�
//����ָ�������ָ���������

//����ϣ������ʲô������ô�͵���ʲô����ĺ���
//���������ַ�ڱ���׶ξ���ȷ������ô��̬����
//���������ַ�����н׶β���ȷ�������Ƕ�̬����
void test01()
{
	Cat cat;
	doSpeker(cat);

	Dog dog;
	doSpeker(dog);
}
int main()
{
	test01();

	system("pause");
	return 0;
}
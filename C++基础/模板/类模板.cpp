#include<iostream>
using namespace std;
#include <string>
//��ģ��
 template<class N, class A=int>//�������е�ͨ������ָ���������ͣ�����Ϳ�����Ĭ�ϲ�������
 class Person
 {
 public:
	 Person(N name, A age)
	 {
		 this->m_Name = name;
		 this->m_Age = age;
	 }
	 void show(Person &a)
	 {
		 cout << "name:" << this->m_Name << " " << "age:" << this->m_Age << endl;
	 }
	 string m_Name;
	 int  m_Age;
 };
 //1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ
 void test01()
 {
	 //ָ��NΪstring���ͣ�AΪint���ͣ�����ָ�����ͣ�
	 Person <string,int>s1("����", 38);
	 s1.show(s1);
 }
 //2����ģ�����ָ��Ĭ������
 void test02()
 {
	 //ָ��NΪstring���ͣ�AΪint���ͣ�����ָ�����ͣ�
	 Person <string> s2("С��", 38);
	 s2.show(s2);
 }
int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
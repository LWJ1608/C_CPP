#pragma once
#include<iostream>
using namespace std;
//类模板函数类外实现
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);
	void Printshow();
public:
	T1 m_name;
	T2 m_age;
};
//构造函数类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
	cout << "T1:" << typeid(T1).name() << endl;
	cout << "T2:" << typeid(T2).name() << endl;
}
//成员函数类外实现
template<class T1, class T2>
void Person <T1, T2>::Printshow()
{
	cout << "name:" << this->m_name << endl;
	cout << "age:" << this->m_age << endl;
}
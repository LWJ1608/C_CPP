#pragma once
#include <iostream>
using namespace std;

//����һ���Լ���������
template<class T>
class MyArray
{

private:
	T * pAddress;  //ָ��һ���ѿռ䣬����ռ�洢����������
	int m_Capacity; //����
	int m_Size;   // ��С
public:
	//�вι��캯��
	MyArray(int capacity)
	{
		//cout << "MyArray�вι��캯������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		pAddress = new T[this->m_Capacity];		
	}
	//�������캯��
	MyArray(const MyArray& arr)
	{
		//cout << "MyArray�������캯������" << endl;
		if (this->pAddress != NULL)
		{
			this->m_Capacity = 0;
			this->m_Size = 0;
			this->pAddress = NULL;
		}
		this->m_Capacity = arr.m_Capacity;
		//this->pAddress = arr.pAddress;//ϵͳĬ�ϵ�ǳ����
		//�Լ��������
		this->pAddress = new T[arr.m_Capacity];

		for (int i = 0; i < this->m_Capacity; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operator= �ض���=������
	MyArray& operator=(const MyArray& array)
	{
		if (this->pAddress != NULL)
		{
			this->pAddress = NULL;
			this->m_Size = 0;
			this->m_Capacity = 0;
		}
		this->m_Capacity = array.m_Capacity;
		//���
		this->pAddress = new T[array.m_Capacity];

		for (int i = 0; i < this->m_Capacity; i++)
		{
			this->pAddress[i] = array.pAddress[i];
		}
		//cout << "MyArray opertor=����" << endl;
		return *this;
	}
	//��д []���� �ö�������[]�ܱ�ʾ���е�����
	T& operator[](int index)
	{
		return this->pAddress[index];
	}
	//β�巨
	void Push(const T& val1)
	{
		if (this->m_Size == this->m_Capacity)
		{
			cout << "����ռ�������" << endl;
			return;
		}
		this->pAddress[this->m_Size] = val1;
		this->m_Size++;
	}
	//βɾ��
	void Delete()
	{
		if (this->m_Size==0)
		{
			cout << "����Ϊ�գ�" << endl;
			return;
		}
		this->m_Size--;
	}
	//��ȡ������Ԫ�ظ���
	int get_size()
	{
		return this->m_Size;
	}
     //��ȡ����������С
	int get_capacity()
	{
		return this->m_Capacity;
	 }
	//��������
	~MyArray()
	{
		//cout << "MyArray������������" << endl;
		delete[]pAddress;
		pAddress = NULL;
		this->m_Size = 0;
		this->m_Capacity = 0;
	}
};    
#pragma once
#include <iostream>
using namespace std;

//建立一个自己的数组类
template<class T>
class MyArray
{

private:
	T * pAddress;  //指向一个堆空间，这个空间存储真正的数据
	int m_Capacity; //容量
	int m_Size;   // 大小
public:
	//有参构造函数
	MyArray(int capacity)
	{
		//cout << "MyArray有参构造函数调用" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		pAddress = new T[this->m_Capacity];		
	}
	//拷贝构造函数
	MyArray(const MyArray& arr)
	{
		//cout << "MyArray拷贝构造函数调用" << endl;
		if (this->pAddress != NULL)
		{
			this->m_Capacity = 0;
			this->m_Size = 0;
			this->pAddress = NULL;
		}
		this->m_Capacity = arr.m_Capacity;
		//this->pAddress = arr.pAddress;//系统默认的浅拷贝
		//自己建立深拷贝
		this->pAddress = new T[arr.m_Capacity];

		for (int i = 0; i < this->m_Capacity; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//operator= 重定义=完成深拷贝
	MyArray& operator=(const MyArray& array)
	{
		if (this->pAddress != NULL)
		{
			this->pAddress = NULL;
			this->m_Size = 0;
			this->m_Capacity = 0;
		}
		this->m_Capacity = array.m_Capacity;
		//深拷贝
		this->pAddress = new T[array.m_Capacity];

		for (int i = 0; i < this->m_Capacity; i++)
		{
			this->pAddress[i] = array.pAddress[i];
		}
		//cout << "MyArray opertor=调用" << endl;
		return *this;
	}
	//重写 []符号 用对象名加[]能表示类中的数组
	T& operator[](int index)
	{
		return this->pAddress[index];
	}
	//尾插法
	void Push(const T& val1)
	{
		if (this->m_Size == this->m_Capacity)
		{
			cout << "数组空间已满！" << endl;
			return;
		}
		this->pAddress[this->m_Size] = val1;
		this->m_Size++;
	}
	//尾删法
	void Delete()
	{
		if (this->m_Size==0)
		{
			cout << "数组为空！" << endl;
			return;
		}
		this->m_Size--;
	}
	//获取数组中元素个数
	int get_size()
	{
		return this->m_Size;
	}
     //获取数组容量大小
	int get_capacity()
	{
		return this->m_Capacity;
	 }
	//析构函数
	~MyArray()
	{
		//cout << "MyArray析构函数调用" << endl;
		delete[]pAddress;
		pAddress = NULL;
		this->m_Size = 0;
		this->m_Capacity = 0;
	}
};    
#pragma once
#include"Stack.h"
template<class T>
class seqStack:public Stack<T>
{
private:
	T* data;
	int top;
	int maxSize;
	void reSize();
public:	
	seqStack(int initSize =3);                         //构造函数
	~seqStack() { delete[]data; }	   			       //析构函数
	void clear() { top = -1; }                         //清空栈
	bool empty() const{ return top == -1; }            //判空
	int size()const { return top + 1; }                //返回栈大小
	void push(const T& value);                         //进栈
	T pop();                                           //出栈
	T getTop()const;                                   //返回栈顶元素     
	//int getMax()const { return maxSize; }              //测试空间是否扩大
};

template<class T>
seqStack<T>::seqStack(int initSize)
{
	if (initSize < 0)throw badSize();
	maxSize = initSize;
	data = new T[initSize];
	top = -1;
}

template<class T>
void seqStack<T>::reSize()
{
	T* tmp = data;
		data= new T[2 * maxSize];
	for (int i = 0; i < maxSize; i++)
	{
		data[i] = tmp[i];
	}
	delete []tmp;
	maxSize *= 2;
}

template<class T>
void seqStack<T>::push(const T& value)                  //进栈
{
	if (top + 1 == maxSize) { reSize(); }
	data[++top] = value;
}

template<class T>
T seqStack<T>::pop()                               //出栈
{
	if (empty())throw outOfRange();
	return data[top--];
}

template<class T>
T seqStack<T>::getTop()const                               //返回栈顶元素
{
	if (empty())throw outOfRange();
	return data[top];
}

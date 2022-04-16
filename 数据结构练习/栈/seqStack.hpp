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
	seqStack(int initSize =3);                         //���캯��
	~seqStack() { delete[]data; }	   			       //��������
	void clear() { top = -1; }                         //���ջ
	bool empty() const{ return top == -1; }            //�п�
	int size()const { return top + 1; }                //����ջ��С
	void push(const T& value);                         //��ջ
	T pop();                                           //��ջ
	T getTop()const;                                   //����ջ��Ԫ��     
	//int getMax()const { return maxSize; }              //���Կռ��Ƿ�����
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
void seqStack<T>::push(const T& value)                  //��ջ
{
	if (top + 1 == maxSize) { reSize(); }
	data[++top] = value;
}

template<class T>
T seqStack<T>::pop()                               //��ջ
{
	if (empty())throw outOfRange();
	return data[top--];
}

template<class T>
T seqStack<T>::getTop()const                               //����ջ��Ԫ��
{
	if (empty())throw outOfRange();
	return data[top];
}

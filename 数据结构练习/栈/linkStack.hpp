#pragma once
#include"Stack.h"

template<class T>
class linkStack
{
private:
	struct Node
	{
	public:
		T data;
		Node* next;
		Node(const T& value, Node* p = NULL)
		{
			data = value;
			next = p;
		}
		Node() { next = NULL; }
	};
	Node *top;//ջ��ָ��
public:
	linkStack() { top = NULL; }                    //���캯��
	~linkStack() { clear(); }                      //��������
	void clear();                                  //���
	void push(const T& value);                     //��ջ
	int size()const;                               //������ջ��С
	bool empty() const{ return top == NULL; }      //�п�
	T pop();                                       //��ջ
	T getTop()const { return top->data; }          //����ջ��Ԫ��

};

template<class T>
void linkStack<T>::push(const T& value)
{
	Node* p;
	p = new Node(value, top);
	top = p;
}

template<class T>
void linkStack<T>::clear()
{
	Node* p;

	while (top)
	{
		p = top;
		top = top->next;
		delete p;
	}
}

template<class T>
int linkStack<T>::size()const
{
	int curlength=0;
	Node* p = top;
	while (p)
	{
		++curlength;
		p = p->next;
	}
	return curlength;
}

template<class T>
T linkStack<T>::pop()
{
	Node* p;
	p = top;
	top = top->next;
	return p->data; 
}


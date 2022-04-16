#pragma once
#include"queue.h"

template<class T>
class linkQueue :public Queue<T>
{
private:
	struct node
	{
		T data;           //����������
		node *next;       //
		node(const T& value, node* p=NULL)
		{
			this->data = value;
			this->next = p;
		}
		node():next(NULL) {}
		~node() {};
	};
	node* front, *rear;//�ֱ�Ϊ����ָ��Ͷ�βָ��
public:
	linkQueue() { front = rear = NULL; }        //���캯�� 
	~linkQueue();                               //��������
	bool empty()const { return front == NULL; } //�п�
	void clear();                               //���
	int size()const;                            //���������д�С
	void enQueue(const T& value);               //���
	T deQueue();                                //����
	T getHead()const;                           //����ͷԪ�أ�����������ֵ
};

template<class T>
linkQueue<T>::~linkQueue()//��������
{
	node* p;
	while (front)
	{
		p = front;
		front = front->next;
		delete p;
	}
}
template<class T> 
void linkQueue<T>::clear()//���
{
	node* p;
	while (front)
	{
		p = front;
		front = front->next;
		delete p;
	}
	rear = NULL;
}

template<class T>
int  linkQueue<T>::size()const//���������д�С
{
	node* p;
	p = front;
	int num = 0;
	while (p)
	{
		num++;
		p = p->next;	
	}
	return num;
}

template<class T>
void linkQueue<T>::enQueue(const T& value)              //���
{
	if (empty())
	{
		front = rear = new node(value);
	}
	else
	{
		rear->next = new node(value);
		rear = rear->next;
	}
}

template<class T>
T linkQueue<T>::deQueue()                                //���Ӳ�������ֵ
{
	if (empty())throw outOfRange();
	node* p;
	p = front;
	T value = front->data;
	front = front->next;
	if (empty())rear = NULL;
	delete p;
	return value;
}

template<class T>
T linkQueue<T>::getHead()const                         //����ͷԪ�أ�����������ֵ
{
	if (empty())throw outOfRange();
	return front->data;
}
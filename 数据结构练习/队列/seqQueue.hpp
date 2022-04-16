#pragma once
#include"queue.h"

template<class T>
class seqQueue:public Queue<T>
{
private:
	T* data;        //
	int maxSize;    //循环队列
	int front, rear;//分别是队首，队尾地址指针
	void resize();  //扩大循环队列容量
public:
	seqQueue(int initSize = 100);                       
	~seqQueue() { delete []data; }                       //析构函数
	bool empty()const { return front == rear; }         //判空
	bool full() const{ return (rear + 1) % maxSize = front; }//判满
	void clear() { front = rear = -1; }                 //清空
	void enQueue(const T& value);                       //入队
	int size()const { return (rear - front + maxSize) % maxSize; }//
	T deQueue();                                        //出队
	T getHead()const;                                   //返回队首元素，不改变队首下标

};

template<class T>
seqQueue<T>::seqQueue(int initSize)
{
	if (initSize <= 0)throw badSize();
	data = new T[initSize];
	maxSize = initSize;
	front = rear = -1;
}

template<class T>
void seqQueue<T>::enQueue(const T& x)
{
	if ((rear + 1) % maxSize == front) resize(); 
	 rear = (rear + 1) % maxSize;
	 data[rear]= x;
}

template<class T>
T seqQueue<T>::deQueue() 
{
	if (empty()) throw outOfRange();
	front = (front + 1) % maxSize;
	return data[front];
}

template<class T>
T seqQueue<T>::getHead() const// 返回队首元素，不移动队首指针
{
	if (empty()) throw outOfRange();
	return data[(front + 1) % maxSize];
}

template<class T>
 void seqQueue<T>::resize()
{
	 T* tmp = data;
	 data = new T[2 * maxSize];
	 for  (int i= 1; i < maxSize; ++i)
	 {
		 data[i] = tmp[(front + i) % maxSize];
	 }
	 front = 0;
	 rear = maxSize - 1;
	 maxSize = 2 * maxSize;
	 delete tmp;

}
#pragma once
class outOfRange :public exception
{
public:
	const char* what()const throw()
	{
		return "ERROR!OUT OF RANGE.\n";
	}
};
class badSize :public exception
{
public:
	const char* what()const throw()
	{
		return "ERROR!BAD SIZE.";
	}
};

template<class T>
class Queue
{
public:
	virtual bool empty()const = 0;                //判空
	virtual int size()const = 0;                  //返回队列大小
	virtual void clear() = 0;                     //清空队列
	virtual void enQueue(const T& value) = 0;     //入队
	virtual T deQueue() = 0;                      //出队
	virtual T getHead()const = 0;                 //读队头元素，并返回它的值
	virtual ~Queue() { };                         //虚析构函数
};
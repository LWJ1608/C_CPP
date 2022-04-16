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
	virtual bool empty()const = 0;                //�п�
	virtual int size()const = 0;                  //���ض��д�С
	virtual void clear() = 0;                     //��ն���
	virtual void enQueue(const T& value) = 0;     //���
	virtual T deQueue() = 0;                      //����
	virtual T getHead()const = 0;                 //����ͷԪ�أ�����������ֵ
	virtual ~Queue() { };                         //����������
};
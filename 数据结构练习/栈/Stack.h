//#ifndef _STACK_H_
//#define _STACK_H_
//using namespace std;
//class outOfRange {};
//class badSize {};
//template<class T>
//class Stack
//{
//public:
//	//virtual void clear()=0;                //���ջ
//	virtual bool empty()const=0;         //�п�
//	virtual int size()const=0;           //����ջ��С
//	virtual void push(const T& value)=0; //��ջ
//	virtual T pop()=0;                   //��ջ
//	virtual T getTop()const=0;           //����ջ��Ԫ��
//	virtual ~Stack()=0;                  //��������
//}; 
//
//
//
//#endif 

#ifndef _STACK_H_
#define _STACK_H_
using namespace std;
template<class T>
class Stack {
public:
	virtual bool empty() const = 0;		//�п� 
	virtual int size()const = 0;
	virtual void push(const T& x) = 0;  	//ѹջ 
	virtual T pop() = 0;				//��ջ 
	virtual T getTop() const = 0;		//ȡջ��Ԫ�� 
	virtual void clear() = 0;
	virtual ~Stack() {}

};
/**
�Զ����쳣������
*/
class outOfRange :public exception {
public:
	const char* what()const throw() {
		return "ERROR!OUT OF RANGE.\n";
	}
};
class badSize :public exception {
public:
	const char* what()const throw() {
		return "ERROR! BAD SiZE.\n";
	}
};
#endif 
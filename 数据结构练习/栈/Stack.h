//#ifndef _STACK_H_
//#define _STACK_H_
//using namespace std;
//class outOfRange {};
//class badSize {};
//template<class T>
//class Stack
//{
//public:
//	//virtual void clear()=0;                //清空栈
//	virtual bool empty()const=0;         //判空
//	virtual int size()const=0;           //返回栈大小
//	virtual void push(const T& value)=0; //进栈
//	virtual T pop()=0;                   //出栈
//	virtual T getTop()const=0;           //返回栈顶元素
//	virtual ~Stack()=0;                  //析构函数
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
	virtual bool empty() const = 0;		//判空 
	virtual int size()const = 0;
	virtual void push(const T& x) = 0;  	//压栈 
	virtual T pop() = 0;				//弹栈 
	virtual T getTop() const = 0;		//取栈顶元素 
	virtual void clear() = 0;
	virtual ~Stack() {}

};
/**
自定义异常处理类
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
#pragma once
#include"list.h"
#include<stack>
template<class T>
class linkList : public List<T>               //单链表
{
private:
	struct Node
	{
	public:
		T data;                                //数据域
		Node* next;                            //指针域
		Node(const T value, Node* p = NULL)    //结构体Node的两个参数的构造函数
		{
			this->data = value;
			this->next = p;
		}
		Node(Node *p = NULL)                   //一个参数的构造函数
		{
			this->next = p;
		}
	};
	Node* head;                            //单链表的头指针
	Node* tail;                            //单链表的尾指针
	int curLength;                         //单链表的大小
	Node* getPosition(int i)const;         //返回指向第i个元素的指针

public:
	linkList();                            //构造函数
	~linkList();                           //析构函数
	bool empty() const{ return head->next == NULL; }//判空
	void clear();                          //清空单链表
	int size()const { return curLength; }  //返回单链表的大小
	void insert(int i, const T& value);    //在第i个位置插入value
	void remove(int i);                    //删除第i个元素
	int search(const T& value)const;       //查找value第一次出现的下标
	void traverse()const;                  //遍历单链表
	T visit(int i)const;			       // 在线性表中，查找位序为i的元素并返回其值
	void headCreate();					   // “头插法”创建单链表
	void tailCreate();					   // “尾插法”创建单链表
	void inverse();					       // 逆置线性表
	linkList* Union(linkList<T>* lb);      //两个单链表合并


	//void traverseRecursive(Node* p);
	//void traverseNonRecursive1();
	//void traverseNonRecursive2();
	//void traverseNonRecursive3();
};

template<class T>
linkList<T>::linkList()                     //构造函数
{
	head = tail = new Node();
	this->curLength = 0;
}

template<class T>
linkList<T>::~linkList()                    //析构函数
{
	clear();
	delete head;
}

template<class T>
void linkList<T>::clear()                   //清空单链表
{
	Node* p, * temp;
	p = head->next;
	while (p != NULL)
	{
		temp = p;
		p = p->next;
		delete temp;
	}
	head->next = NULL;
	tail = head;
	curLength = 0;
}
//
//
template<class T>
typename linkList<T>::Node* linkList<T>::getPosition(int i)const//返回指向第i个元素的指针
{	
	Node* p = head;
	if (i<-1 || i>this->curLength - 1)return NULL;

	int count = 0;
	while (count <= i)
	{
		p = p->next;
		count++;
	}
	return p;
}

template<class T>
void linkList<T>::insert(int i, const T& value)  //在第i个位置插入value
{
	if (i<0 || i>this->curLength)
		throw outOfRange();
	Node* p = this->getPosition(i - 1);
	Node* q = new Node(value, p->next);
	p->next = q;
	if (p == tail)
	{
		tail = q;
	}
	this->curLength++;
}

template<class T>
void linkList<T>::remove(int i)                    //删除第i个元素
{
	Node* pre, * p;
	if (i<0 || i>this->curLength - 1)
		throw outOfRange();
	pre = this->getPosition(i - 1);
	p = pre->next;
	if (p == tail)
	{
		tail = pre;
		pre->next = NULL;
		delete p;
	}
	else
	{
		pre->next = p->next;
		delete p;
		this->curLength--;
	}
}

template<class T>
int linkList<T>::search(const T& value)const     //查找value第一次出现的下标
{
	Node* p = head->next;
	int count = -1;
	while (p != NULL && p->data != value)
	{
		p = p->next;
		count++;
	}
	if (p->next == NULL)
	{
		return -1;
	}
	else
	{
		return count;
	}
}

template<class T>
void linkList<T>::traverse() const               //遍历单链表
{
	Node* p = head->next;
	cout << "traverse：" << endl;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}		
	cout << endl;
}

template<class T>
T linkList<T>::visit(int i)const 				// 在线性表中，查找位序为i的元素并返回其值
{
	Node* p = head->next;
	int count = 0;
	if (i<0 || i>this->curLength - 1)
		throw outOfRange();
	while (i> count)
	{
		p = p->next;
		count++;
	}
		return  p->data;
}

template<class T>
void linkList<T>::headCreate()				    // “头插法”创建单链表
{
	Node* p;
	T value, flag;
	cout << "请输入结束标志flag的值:";
	cin >> flag;
	while (cin >> value, value != flag)
	{	
		p = new Node(value, head->next);
		head->next = p;
		if (head == tail)tail = p;
		curLength++;
	}
}

template<class T>
void linkList<T>::tailCreate()                    //尾插法
{
	Node* p;
	int value, flag;
	cin >> flag;

	while (cin >> value, flag != value)
	{
		p = new Node(value, NULL);
		tail->next = p;
		tail = p;
		curLength++;
	}
}

template<class T>
void linkList<T>::inverse()                      // 逆置线性表
{
	Node* p, * temp;
	p = head->next;
	head->next = NULL;
	tail = head->next;
	if (p)tail = p;
	while (p)
	{

		temp = p->next;
		p->next = head->next;
		head->next = p;
		p = temp;
	}
}

template<class T>
linkList<T>* linkList<T>::Union(linkList<T>* lb)              //两个单链表融合
{
	Node* pa, * pb, * pc;						// 分别是链表la、lb、lc的工作指针
	linkList<T>* lc = this;			            // lc利用la空间，将lb合并进来
	pa = head->next;
	head->next = NULL;			                // la表头结点的指针域置为NULL，构成空链表
	pb = (lb->head)->next;
	(lb->head)->next = NULL;                    // lb表头结点的指针域置为NULL，构成空链表
	pc = lc->head;

	while (pb && pa)
	{
		if (pa->data <= pb->data)
		{
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
		else
		{
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
	}
	if (pa)
	{
		pc->next = pa;
		lc->tail = tail;
	}
	else
	{
		pc->next = pb;
		lc->tail = lb->tail;
	}
	lc->curLength = curLength + lb->curLength;
	delete lb;
	return lc;
}
//#endif;

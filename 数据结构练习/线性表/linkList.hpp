#pragma once
#include"list.h"
#include<stack>
template<class T>
class linkList : public List<T>               //������
{
private:
	struct Node
	{
	public:
		T data;                                //������
		Node* next;                            //ָ����
		Node(const T value, Node* p = NULL)    //�ṹ��Node�����������Ĺ��캯��
		{
			this->data = value;
			this->next = p;
		}
		Node(Node *p = NULL)                   //һ�������Ĺ��캯��
		{
			this->next = p;
		}
	};
	Node* head;                            //�������ͷָ��
	Node* tail;                            //�������βָ��
	int curLength;                         //������Ĵ�С
	Node* getPosition(int i)const;         //����ָ���i��Ԫ�ص�ָ��

public:
	linkList();                            //���캯��
	~linkList();                           //��������
	bool empty() const{ return head->next == NULL; }//�п�
	void clear();                          //��յ�����
	int size()const { return curLength; }  //���ص�����Ĵ�С
	void insert(int i, const T& value);    //�ڵ�i��λ�ò���value
	void remove(int i);                    //ɾ����i��Ԫ��
	int search(const T& value)const;       //����value��һ�γ��ֵ��±�
	void traverse()const;                  //����������
	T visit(int i)const;			       // �����Ա��У�����λ��Ϊi��Ԫ�ز�������ֵ
	void headCreate();					   // ��ͷ�巨������������
	void tailCreate();					   // ��β�巨������������
	void inverse();					       // �������Ա�
	linkList* Union(linkList<T>* lb);      //����������ϲ�


	//void traverseRecursive(Node* p);
	//void traverseNonRecursive1();
	//void traverseNonRecursive2();
	//void traverseNonRecursive3();
};

template<class T>
linkList<T>::linkList()                     //���캯��
{
	head = tail = new Node();
	this->curLength = 0;
}

template<class T>
linkList<T>::~linkList()                    //��������
{
	clear();
	delete head;
}

template<class T>
void linkList<T>::clear()                   //��յ�����
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
typename linkList<T>::Node* linkList<T>::getPosition(int i)const//����ָ���i��Ԫ�ص�ָ��
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
void linkList<T>::insert(int i, const T& value)  //�ڵ�i��λ�ò���value
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
void linkList<T>::remove(int i)                    //ɾ����i��Ԫ��
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
int linkList<T>::search(const T& value)const     //����value��һ�γ��ֵ��±�
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
void linkList<T>::traverse() const               //����������
{
	Node* p = head->next;
	cout << "traverse��" << endl;
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;
	}		
	cout << endl;
}

template<class T>
T linkList<T>::visit(int i)const 				// �����Ա��У�����λ��Ϊi��Ԫ�ز�������ֵ
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
void linkList<T>::headCreate()				    // ��ͷ�巨������������
{
	Node* p;
	T value, flag;
	cout << "�����������־flag��ֵ:";
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
void linkList<T>::tailCreate()                    //β�巨
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
void linkList<T>::inverse()                      // �������Ա�
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
linkList<T>* linkList<T>::Union(linkList<T>* lb)              //�����������ں�
{
	Node* pa, * pb, * pc;						// �ֱ�������la��lb��lc�Ĺ���ָ��
	linkList<T>* lc = this;			            // lc����la�ռ䣬��lb�ϲ�����
	pa = head->next;
	head->next = NULL;			                // la��ͷ����ָ������ΪNULL�����ɿ�����
	pb = (lb->head)->next;
	(lb->head)->next = NULL;                    // lb��ͷ����ָ������ΪNULL�����ɿ�����
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

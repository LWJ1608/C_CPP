#pragma once
template<class T>
class doubleLinkList
{
private:
	struct Node
	{
	public:
		T data;
		Node* next;
		Node* prior;
		Node(Node* p,const T &value,Node* n)
		{
			this->data = value;
			this->next = n;
			this->prior = p; 
		}
		Node() :prior(NULL), next(NULL){}
		~Node() {}

	};
	Node* head, * tail;
	int curLength;
	Node* getPosition(int i)const;                    //���ص�iԪ�ص�ǰ��
public:
	doubleLinkList();                                 //���캯��
	~doubleLinkList();                                //��������
	bool empty() const{ return head->next == tail; }  //�п�
	T size()const { return curLength; }               //����
	void clear();                                     //���
	void insert(int i, const T& value);               //�ڵ�i��λ�ò���Ԫ��value
	int search(const T& value)const;	              //�����Ա��У�����ֵΪvalue��Ԫ�ص�һ�γ��ֵ�λ��
	void traverse()const;                             //����˫����
	T visit(int i)const ;	                		  // �����Ա��У�����λ��Ϊi��Ԫ�ز�������ֵ
	void remove(int i);      				          //�����Ա��У�λ��Ϊi[0..n-1]��λ��ɾ��Ԫ��
	virtual void inverse() ;					      // �������Ա�
};

template<class T>
doubleLinkList<T>::doubleLinkList()                   //���캯��
{
	head = new Node;
	tail = new Node;
	head->next = tail;
	tail->prior = head;
	curLength = 0;
}

template<class T>
void doubleLinkList<T>::clear()                      //���
{
	Node* p = head->next;
	Node* tmp;
	head->next = tail;
	tail->prior = head;
	while (p!=tail)
	{
		tmp = p->next;
		delete p;
		p = tmp;
	}

	curLength = 0;
}

template<class T>
doubleLinkList<T>::~doubleLinkList()                 //��������
{
	clear();
	delete head;
	delete tail;
}

template<class T>
typename doubleLinkList<T>::Node* doubleLinkList<T>::getPosition(int i)const//����ָ���i��Ԫ�ص�ָ��
{
	Node* p = head;
	int m = 0;
	if (i<-1 || i>this->curLength)
		throw outOfRange();
	while (m <= i)
	{
		p = p->next;
		m++;
	}
	return p;
}

//template<class T>
//void doubleLinkList<T>::insert(int i,const T& value) //�ڵ�i��λλ�ò���Ԫ��value
//{
//	Node* p = this->getPosition(i-1);
//
//	if (i<0 || i>this->curLength)
//		throw outOfRange();
//	Node* q=new Node(p,value,p->next);
//	p->next = q;
//	p->next->prior = q;
//	++curLength;
//
//}

template <class T>
void doubleLinkList<T>::insert(int i, const T& value)
{
	Node* p, * tmp;
	if (i < 0 || i > curLength)					// �Ϸ��Ĳ���λ��Ϊ[0..n]
		throw outOfRange();					    // ����λ�÷Ƿ����׳��쳣
	p = getPosition(i);						    // ��i==n��λ��tailָ���β���
	tmp = new Node(p->prior, value, p);  	    // tmp���뵽p֮ǰ
	p->prior->next = tmp;
	p->prior = tmp;
	++curLength;
}

template<class T>
void doubleLinkList<T>::remove(int i) 				    // �����Ա��У�λ��Ϊi[0..n-1]��λ��ɾ��Ԫ��
{
	Node* p;
	if (i<0 || i>curLength - 1)
		throw outOfRange();
	p = getPosition(i);
	p->prior->next = p->next;
	p->next->prior = p->prior;
	delete p;
	--curLength;
}

template<class T>
void doubleLinkList<T>::traverse()const                  //����˫����
{
	Node* p;
	p = head->next;
	cout << "����˫����";

	while (p!=tail)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
template<class T>
int doubleLinkList<T>::search(const T& value)const	     //�����Ա��У�����ֵΪvalue��Ԫ�ص�һ�γ��ֵ�λ��
{
	Node* p = head->next;
	int count = 0;
	while (count <= curLength - 1 && p != tail)
	{
		if (value == p->data)
		{
			return count;
		}
		p = p->next;
		++count;
	}
}

template<class T>
T doubleLinkList<T>::visit(int i)const	              // �����Ա��У�����λ��Ϊi��Ԫ�ز�������ֵ
{
	if (i<0 || i>this->curLength - 1)
		throw outOfRange();
	Node* p = this->getPosition(i);
	return p->data;	
}

template<class T>
void  doubleLinkList<T>::inverse()         					    // �������Ա�
{
	Node* p = head->next;
	Node* tmp;
	head->next = tail;
	tail->prior = head;
	while (p != tail)
	{
	    tmp = p->next;
		p->next = head->next;
		p->prior = head;
		head->next->prior =p;
		head->next = p;
		p = tmp;
	}
}
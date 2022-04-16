/**
* @authtor liaoWangjun
* �޸����ڣ�2022��3��6��
* ������ʵ��
**/
#ifndef _BINARYLINKLIST_H_
#define _BINARYLINKLIST_H_
#include<queue>

#include<iostream>

using namespace std;
//�����еĳ�Ա���������const����ú��������޸���ĳ�Ա����ֵ����ǰ��ӵĻ��������޸��亯������ֵ
template <class T>
class binaryTree {
public:
	virtual bool empty()const = 0;           //�п�
	virtual void clear() = 0;                //���
	virtual int height()const = 0;           //�������ĸ߶�
	virtual int size()const = 0;             //�������Ľ������
	virtual void preOrderTraverse()const = 0;//ǰ������
	virtual void inOrderTraverse()const = 0; //��������
	virtual void postOrderTraverse()const = 0;//��������
	virtual void levelOrderTraverse()const = 0;//�������
	virtual ~binaryTree() {};//
};

template<class T>
class BinaryLinkList: public binaryTree<T>//������һ��Ҫ�ض��崿�麯������Ȼ���ܴ�������
{
private:
	struct Node 
	{
		Node* left, *right;//��������������
		T data; //������
		Node() :left(NULL), right(NULL) {};//�޲ι��캯���������ս��
		Node(Node value, Node* l, Node* r)//�����вν��
		{
			data = value;
			left = l;
			right = r;
		}
		~Node() {};
	};
	Node* root;//�����
	void clear(Node* t);//���
	int height(Node* t)const;//�������ĸ߶�
	int size(Node* t)const;//�������Ľ������
	int leftNum(Node* t)const;//��������Ҷ����
	void preOrder(Node* t)const;//�ݹ�ǰ�����
	void inOrder(Node* t)const;//�ݹ��������
	void postOrder(Node* t)const;//�ݹ��������
	void preOrderCreate(T flag, Node* &t);//����������
public:
	BinaryLinkList() :root(NULL) {};
	~BinaryLinkList() { clear(); }
	bool empty() const { return root == NULL; }
	void clear() { if (root) clear(root); root = NULL; }
	int size()const { return size(root); }
	int height()const { if (root)return height(root); }
	int leftNum()const { if (root)leftNum(root); }
	void preOrderTraverse()const { if (root)preOrder(root); }
	void inOrderTraverse()const { if (root)inOrder(root); }
	void postOrderTraverse()const { if (root)postOrder(root); }
	void levelOrderTraverse()const;
	//void levelOrderCreate(T flag);
	void preOrderCreate(T flag)
	{
		preOrderCreate(flag, root);
	}
};

//ǰ�����
template<class T>
void BinaryLinkList<T>::inOrder(Node* t)const
{
	if (t)
	{
		cout << t->data << " ";
		preOrder(t->left);
		preOrder(t->right);
	}
	cout << endl;
}

//�������
template<class T>
void BinaryLinkList<T>::preOrder(Node* t)const
{
	if (t)
	{
		inOrder(t->left);
		cout << t->data << " ";
		inOrder(t->right);
	}
	cout << endl;
}

//�������
template<class T>
void BinaryLinkList<T>::postOrder(Node* t)const
{
	if (t)
	{
		inOrder(t->left);
		inOrder(t->right);
		cout << t->data << " ";
	}
	cout << endl;
}

//��α���
template<class T>
void BinaryLinkList<T>::levelOrderTraverse()const
{
	if (empty())return;
	Node* p = root;
	queue<Node* >que;//STL�еĶ���
	que.push(p);//��������ŵ���β��
	while (!que.empty())
	{
		p = que.front();//ȡ����Ԫ��
		que.pop();//ȥ������Ԫ��
		cout << p->data << " ";
		if (p->left != NULL)que.push(p->left);
		if (p->right != NULL)que.push(p->right);
	} 
	cout << endl;
}

//�����ⲿ����ǰ�����н��������� 
//Node*& t����д�ܹ��ı�tָ��ָ���ͬʱҲ�ı�����root��ָ�򣬶���ָ�����Ŀռ䣬���û�����ã���ֻ����ָ��ı��ظ�����t����������Ӱ�������(root)
template<class T>
void BinaryLinkList<T>::preOrderCreate(T flag, Node* & t)
{
	T value;
	cin >> value;
	if (value != flag)
	{
		t = new Node(value);
		preOrderCreate(flag, t->left);
		preOrderCreate(flag, t->right);
	}
	else t = NULL;
	cout << endl;
}

////��η�����������
//template<class T>
//void BiniaryLinkList<T>::levelOrderCreate(T flag)
//{
//
//}

//���
template<class T>
void BinaryLinkList<T>::clear(Node* t) 
{
	if (t->left) { clear(t->left); }
	if (t->right){ clear(t->right);}
	delete t;
}
//�������������
template<class T>
int  BinaryLinkList<T>::size(Node* t) const
{
	if (t == NULL)return 0;
	return 1 + size(t->left) + size(t->right);
}
//��������߶�
template<class T>
int  BinaryLinkList<T>::height(Node* t) const
{
	if (t == NULL)return 0;
	int ln = height(t->left);
	int rn = height(t->right);
	return 1 + (ln > rn) ? ln : rn;
}
//��������Ҷ����
template<class T>
int  BinaryLinkList<T>::leftNum(Node* t)const
{
	if (t == NULL) { return 0; }
	else if (t->left == NULL && t->right == NULL) { return 1; }
	else return leftNum(t->left) + leftNum(t->right);
}


#endif

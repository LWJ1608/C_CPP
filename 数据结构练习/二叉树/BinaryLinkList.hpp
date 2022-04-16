/**
* @authtor liaoWangjun
* 修改日期：2022年3月6日
* 二叉树实现
**/
#ifndef _BINARYLINKLIST_H_
#define _BINARYLINKLIST_H_
#include<queue>

#include<iostream>

using namespace std;
//在类中的成员函数后面加const，则该函数不能修改类的成员变量值；在前面加的话，则不能修改其函数返回值
template <class T>
class binaryTree {
public:
	virtual bool empty()const = 0;           //判空
	virtual void clear() = 0;                //清空
	virtual int height()const = 0;           //二叉树的高度
	virtual int size()const = 0;             //二叉树的结点总数
	virtual void preOrderTraverse()const = 0;//前序排序
	virtual void inOrderTraverse()const = 0; //中序排序
	virtual void postOrderTraverse()const = 0;//后续排序
	virtual void levelOrderTraverse()const = 0;//层次排序
	virtual ~binaryTree() {};//
};

template<class T>
class BinaryLinkList: public binaryTree<T>//派生类一定要重定义纯虚函数，不然不能创建对象
{
private:
	struct Node 
	{
		Node* left, *right;//左子树，右子树
		T data; //数据域
		Node() :left(NULL), right(NULL) {};//无参构造函数，创建空结点
		Node(Node value, Node* l, Node* r)//创建有参结点
		{
			data = value;
			left = l;
			right = r;
		}
		~Node() {};
	};
	Node* root;//根结点
	void clear(Node* t);//清空
	int height(Node* t)const;//二叉树的高度
	int size(Node* t)const;//二叉树的结点总数
	int leftNum(Node* t)const;//二叉树的叶子数
	void preOrder(Node* t)const;//递归前序遍历
	void inOrder(Node* t)const;//递归中序遍历
	void postOrder(Node* t)const;//递归后续遍历
	void preOrderCreate(T flag, Node* &t);//创建二叉树
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

//前序遍历
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

//中序遍历
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

//后序遍历
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

//层次遍历
template<class T>
void BinaryLinkList<T>::levelOrderTraverse()const
{
	if (empty())return;
	Node* p = root;
	queue<Node* >que;//STL中的队列
	que.push(p);//将根结点存放到队尾中
	while (!que.empty())
	{
		p = que.front();//取队首元素
		que.pop();//去除队首元素
		cout << p->data << " ";
		if (p->left != NULL)que.push(p->left);
		if (p->right != NULL)que.push(p->right);
	} 
	cout << endl;
}

//按带外部结点的前序序列建立二叉树 
//Node*& t这样写能够改变t指针指向的同时也改变根结点root的指向，都能指向分配的空间，如果没有引用，将只更改指针的本地副本（t），而不会影响调用者(root)
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

////层次法创建二叉树
//template<class T>
//void BiniaryLinkList<T>::levelOrderCreate(T flag)
//{
//
//}

//清空
template<class T>
void BinaryLinkList<T>::clear(Node* t) 
{
	if (t->left) { clear(t->left); }
	if (t->right){ clear(t->right);}
	delete t;
}
//求二叉树结点个数
template<class T>
int  BinaryLinkList<T>::size(Node* t) const
{
	if (t == NULL)return 0;
	return 1 + size(t->left) + size(t->right);
}
//求二叉树高度
template<class T>
int  BinaryLinkList<T>::height(Node* t) const
{
	if (t == NULL)return 0;
	int ln = height(t->left);
	int rn = height(t->right);
	return 1 + (ln > rn) ? ln : rn;
}
//二叉树的叶子数
template<class T>
int  BinaryLinkList<T>::leftNum(Node* t)const
{
	if (t == NULL) { return 0; }
	else if (t->left == NULL && t->right == NULL) { return 1; }
	else return leftNum(t->left) + leftNum(t->right);
}


#endif

#include <iostream>
using namespace std;
struct stack {  //����һ��ջ
	int* Slist;
	int top;
	int Maxsize;
};
void Initstack(stack& SL, const int MS); //ջ��ʼ��
bool Stackempty(stack& SL);//��ջ��
bool Stackfull(stack& SL); //ջ��
void Clearstack(stack& SL); //���ջ
int Push(stack& SL, int& item);//��Ԫ���ƽ�ջ
int Pop(stack& SL);//��ջ
void Traverstack(stack& SL); //���ջ��Ԫ��
const int N = 5;//Ԥ��ջ�����ռ�
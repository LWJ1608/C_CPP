#include"can.h"
void Initstack(stack& SL, const int MS) //ջ�ĳ�ʼ��
{
	SL.Slist = new int[MS];
	if (!SL.Slist) {
		cout << "��ջ�����ڴ�ʧ�ܡ�" << endl;
		exit(1);
	}
	SL.Maxsize = MS;
	SL.top = -1;
}
bool Stackempty(stack& SL) //�п�
{
	return SL.top == -1;
}
bool Stackfull(stack& SL)//����
{
	return SL.top == SL.Maxsize;
}
void Clearstack(stack& SL)//���ջ
{
	SL.top = -1;
}
int Push(stack& SL, int& item)//Ԫ�ؽ�ջ
{
	if (Stackfull(SL)) return false;
	SL.top++;
	SL.Slist[SL.top] = item;
	return SL.Slist[SL.top];
}
int Pop(stack& SL) //Ԫ�س�ջ
{
	if (Stackempty(SL)) return false;
	return SL.Slist[SL.top--];
	SL.top--;
}
void Traverstack(stack& SL)//���ջ
{
	for (int i = 0; i <= SL.top; i++)
		cout << SL.Slist[i] << endl;
	cout << endl;
}





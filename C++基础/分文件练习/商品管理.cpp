#include <iostream>
using namespace std;
#include"can.h"

int main(){
	cout << "***************��Ʒ���ܹ���****************" << endl;
 
	int i, t, temp, x; 
	stack s;	
	Initstack(s, N);
	cout << "��������ϵ����е���Ʒ��Ϣ��" << endl;
	cout << "ע��������˿�ʼ�������ڽϴ󣩣�Ԥ������������Ʒ�ɷſռ䣬�����������ݣ�ÿ����Ʒ�����Իس�����������" << endl;
	for (i = 0; i<N ;i++) { //����5������
		cin >> x;
		Push(s,x);
	}
	cout << "***************��Ʒ¼�����****************" << endl;
	
	cout << "������Ҫȡ��Ʒ������:" << endl;
	cin >> x;
	while (x<0 && x>N){
		cout << "Ҫ�����Ʒ�������������������룺" << endl;
		cin >> x;
	}
	for (i = 0; i<x; i++) //ȡx����Ʒ
		cout << "ȡ������Ʒ����������:" << Pop(s) << endl;
	t = s.Maxsize - s.top -1;
	cout << "���ڻ��ܻ��ܷ���" << t << "����Ʒ" << endl;
	
	stack s1;//��������ջ
	Initstack(s1, N);
	cout << "������Ҫ������ܵ�����Ʒ���ڣ�" << endl;
	for(i=0;i<t;i++){//��������
		cin>>x;
		while(Stackempty(s)!=1&&x>s.Slist[s.top]){
			temp=Pop(s);
			Push(s1,temp);
		}
		Push(s,x);
		while(Stackempty(s1)!=1){
			temp=Pop(s1);
			Push(s,temp);
		}
	}
	cout << "***************��Ʒ�ϻ����****************" << endl;
	cout << "�ӻ��ܿ���˵���˵���Ʒ������Ϊ:" << endl;
	Traverstack(s); // ��ʾ��������Ʒ��ջԪ��˳��
 
}

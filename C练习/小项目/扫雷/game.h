#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define EASY_COUNT 10
#define L 9
#define F 9

#define Ls L+2
#define Fs F+2

void InItBoard(char arr[Ls][Fs], int l, int f,char set);//��ʼ��
void DisplayBoard(char arr[Ls][Fs], int l, int f);//��ӡ
void SetMine(char arr[Ls][Fs], int l, int f);//������
void FindMine(char show[Ls][Fs], char mine[Ls][Fs], int l, int f);//ɨ��
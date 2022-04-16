#define F 3
#define L 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Arr_1(char arr[F][L], int f, int l);       //初始化数组
void PrintArr(char arr[F][L], int f, int l);    //打印棋盘
void Player(char arr[F][L], int f, int l);      //玩家下棋
void Computer(char arr[F][L], int f, int l);    //电脑下棋
char Win_Or_Lose(char arr[F][L], int f, int l); //判断输赢

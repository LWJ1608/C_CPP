#include"game.h"

void gameManu()
{
	printf("**********************************************\n");
	printf("***********     请输入游戏选择     ***********\n");
	printf("**********       1.开始游戏        ***********\n");
	printf("**********       2.结束游戏        ***********\n");
	printf("**********************************************\n");
}

void game()
{
	char arr[L][F] = { 0 };//全部空格
	Arr_1(arr,L,F);//初始化数组
	while (1)
	{

		PrintArr(arr, L, F);//打印棋盘
		Player(arr, L, F);//人下
		char a = Win_Or_Lose(arr, F, L);
		if (a!='T')
		{
			break;
		}
		Computer(arr, L, F);//电脑下
		IsFull(arr, L, F);
		if (a != 'T')
		{
			break;
		}
	}
	char a = Win_Or_Lose(arr, F, L);
	if (a == '*')
	{
		printf("玩家胜利！\n\n");
	}
	if (a == '#')
	{
		printf("电脑胜利！\n\n");
	}
	if (a == 'Q')
	{
		printf("平局。\n\n");
	}
}


void test()
{
	int num;

	do
	{
		gameManu();
		printf("请选择：\n");
		scanf_s("%d\n", &num);
		switch (num)
			{
			case 1:
				printf("开始开始游戏！\n\n");
				game();
				break;
			case 2:
				exit(0);
				break;
			default:
				printf("输入不正确，请重新输入！\n\n");
				break;
			}
	} 	while (num);
}
int main()
{
	test();
	return 0;
}
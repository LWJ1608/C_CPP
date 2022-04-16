#include"game.h"

void game()
{
	char mine[Ls][Fs] = { 0 };
	char show[Ls][Fs] = { 0 };
	InItBoard(mine, Ls, Fs, '0');//初始化
	InItBoard(show, Ls, Fs, '*');//
	SetMine(mine, L, F);

	DisplayBoard(show, L, F);
	FindMine(show, mine, L, F);
}
void menu()
{
	printf("*************************************************************\n");
	printf("*************          1.开始游戏！         *****************\n");
	printf("*************          0.退出游戏！         *****************\n");
	printf("*************************************************************\n");
}
int main()
{
	int num = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：\n");
		scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			printf("开始游戏！\n");
			game();
			//system("cls");
			break;
		case 0:
			printf("退出游戏！\n");
			exit(0);
			break;
		default:
			printf("输入错误！\n");
			break;
		}
		system("cls");
	} while (num);
	return 0;
}
#include "game.h"

void Arr_1(char arr[F][L], int f, int l) //初始化数组
{
	int i;
	int j;
	for (i = 0; i < f; i++)
	{
		for (j = 0; j < l; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
//   |   |
//---|---|---
//   |   |
//---|---|---
//   |   |

void PrintArr(char arr[F][L], int f, int l) //打印棋盘
{
	int i;
	for (i = 0; i < f; i++)
	{
		int j;
		for (j = 0; j < l; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < l - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		j = 0;
		if (i < l - 1)
		{
			for (j = 0; j < l; j++)
			{
				printf("---");
				if (j < l - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
	printf("\n");
}

void Player(char arr[F][L], int f, int l) //玩家下棋
{
	int a, b;
	printf("\n请输入所要下子的坐标\n");
	while (1)
	{
		scanf_s("%d %d", &a, &b);
		if (arr[a][b] != '*' && arr[a][b] != '#')
		{
			arr[a][b] = '*';
			break;
		}
		else
		{
			printf("坐标输入错误或坐标已有棋子,重新输入坐标。\n");
		}
	}
}

void Computer(char arr[F][L], int f, int l) //电脑下棋
{
	int c, d;
	while (1)
	{
		srand((unsigned)time(NULL));
		c = rand() % f;
		d = rand() % l;
		if (arr[c][d] != '*' && arr[c][d] != '#')
		{
			arr[c][d] = '#';
			break;
		}
	}
}

int IsFull(char arr[F][L], int f, int l)
{
	// int tmp=0;
	// int a = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < f; i++)
	{
		for (int j = 0; j < l; j++)
		{

			if (arr[i][j] == ' ')
			{
				return 0; //没满
			}
		}
	}
	return 1;
}
char Win_Or_Lose(char arr[F][L], int f, int l) //判断输赢
{
	//横排相等
	for (int i = 0; i < f; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][2] != ' ')
		{
			return arr[i][0]; //人赢
		}
	}
	//横排相等
	for (int j = 0; j < l; j++)
	{
		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j] && arr[2][j] != ' ')
		{
			return arr[0][j]; //人赢
		}
	}
	//斜线相等
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] != ' ')
	{
		return arr[0][0];
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] != ' ')
	{
		return arr[1][1];
	}
	int tmp = IsFull(arr, F, L);
	if (tmp == 1)
	{
		return 'Q';
	}
	return 'T';
	//'Q'平局
	//'T'继续游戏
}
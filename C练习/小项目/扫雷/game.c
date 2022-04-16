#include"game.h"

//初始化
void InItBoard(char arr[Ls][Fs], int l, int f, char set)
{
	for (int i = 0; i < l; i++)
	{
		for (int  j = 0; j < f; j++)
		{
			arr[i][j] = set;
		}
	}
	printf("\n");
}

void DisplayBoard(char arr[Ls][Fs], int l, int f)//打印
{
	for (int a = 0; a <=f; a++)
	{
		printf("%d  ", a);
	}
	printf("\n");
	for (int i = 1; i <=l; i++)
	{
		printf("%d  ", i);
		for (int j = 1; j <=f; j++)
		{
			printf("%c  ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void SetMine(char arr[Ls][Fs], int l, int f)//布置雷
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % l + 1;
		int y = rand() % f + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}
static int get_mine_num(char mine[Ls][Fs], int x, int y)//计算周围雷的个数
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
void FindMine(char show[Ls][Fs], char mine[Ls][Fs],int l, int f)//扫雷
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < l * f - EASY_COUNT)
	{
		printf("请输入雷区中的坐标\n");
		scanf_s("%d %d", &x, &y);
		if (x >= 0 && x <= 9 && y >= 0 && y <= 9&&show[x][y]=='*')
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了！\n");
				DisplayBoard(mine, l, f);
				break;
			}
			else
			{
				int count = get_mine_num(mine,x,y);
				show[x][y] = count + '0';
				DisplayBoard(show, l, f);
				win++;
			}
		}
		else
		{
			printf("坐标输入错误，或该坐标已扫\n");
		}
		if (win >= l * f - EASY_COUNT)
		{
			printf("恭喜你赢得胜利！\n");
			break;
		}
	}
}
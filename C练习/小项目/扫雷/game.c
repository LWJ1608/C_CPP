#include"game.h"

//��ʼ��
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

void DisplayBoard(char arr[Ls][Fs], int l, int f)//��ӡ
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

void SetMine(char arr[Ls][Fs], int l, int f)//������
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
static int get_mine_num(char mine[Ls][Fs], int x, int y)//������Χ�׵ĸ���
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
void FindMine(char show[Ls][Fs], char mine[Ls][Fs],int l, int f)//ɨ��
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < l * f - EASY_COUNT)
	{
		printf("�����������е�����\n");
		scanf_s("%d %d", &x, &y);
		if (x >= 0 && x <= 9 && y >= 0 && y <= 9&&show[x][y]=='*')
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը���ˣ�\n");
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
			printf("����������󣬻��������ɨ\n");
		}
		if (win >= l * f - EASY_COUNT)
		{
			printf("��ϲ��Ӯ��ʤ����\n");
			break;
		}
	}
}
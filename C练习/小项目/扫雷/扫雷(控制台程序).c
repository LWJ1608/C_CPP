#include"game.h"

void game()
{
	char mine[Ls][Fs] = { 0 };
	char show[Ls][Fs] = { 0 };
	InItBoard(mine, Ls, Fs, '0');//��ʼ��
	InItBoard(show, Ls, Fs, '*');//
	SetMine(mine, L, F);

	DisplayBoard(show, L, F);
	FindMine(show, mine, L, F);
}
void menu()
{
	printf("*************************************************************\n");
	printf("*************          1.��ʼ��Ϸ��         *****************\n");
	printf("*************          0.�˳���Ϸ��         *****************\n");
	printf("*************************************************************\n");
}
int main()
{
	int num = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			printf("��ʼ��Ϸ��\n");
			game();
			//system("cls");
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			exit(0);
			break;
		default:
			printf("�������\n");
			break;
		}
		system("cls");
	} while (num);
	return 0;
}
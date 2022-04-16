#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char ch_1[] = "wecome to the world!!!!!!!!";
	char ch_2[] = "###########################";
	int a = 0;
	int b = strlen(ch_2);
	while (a <= b)
	{
		ch_2[a] = ch_1[a];
		ch_2[b] = ch_1[b];
		printf("%s\n", ch_2);
		a++;
		b--;
		Sleep(1000);
		system("cls");
	}
	printf("%s\n", ch_1);
	return 0;
}
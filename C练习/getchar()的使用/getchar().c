#include<stdio.h>
#define  _CRT_SECURE_NO_WARNINGS

int main()
{

	char ch[20] = { 0 };
	int tmp = 0;
	printf("���������룺");
	scanf_s("%s \n", ch,20);
	printf("��ȷ�����루Y/N��:");
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	int p = getchar(ch);
	if (p == 'Y')
	{
		printf("ȷ�ϳɹ���");
	}
	else
	{
		printf("ȷ��ʧ�ܣ�");
	}
}
#include<stdio.h>
#define  _CRT_SECURE_NO_WARNINGS

int main()
{

	char ch[20] = { 0 };
	int tmp = 0;
	printf("请输入密码：");
	scanf_s("%s \n", ch,20);
	printf("请确认密码（Y/N）:");
	while ((tmp = getchar()) != '\n')
	{
		;
	}
	int p = getchar(ch);
	if (p == 'Y')
	{
		printf("确认成功！");
	}
	else
	{
		printf("确认失败！");
	}
}
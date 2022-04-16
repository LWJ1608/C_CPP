#include<stdio.h>

#define _CRT_SECURE_NO_WARNINGS

void if_else()
{
	int Age = 19;
	if (Age < 18)//选择语句 if...else
	{
		printf("未成年，不能谈恋爱！");
	}
	else
	{
		printf("已成年可以谈恋爱。\n");
	}

	int age = 88;
	if (age < 18)//选择语句 if...else if
	{
		printf("少年\n");
	}
	else if (age > 18 && age < 30)
	{
		printf("青年\n");
	}
	else if (age > 30 && age < 40)
	{
		printf("中年\n");
	}
	else if (age > 40 && age < 60)
	{
		printf("壮年\n");
	}
	else if (age > 60 && age < 80)
	{
		printf("老年年\n");
	}
	else
	{
		printf("老不死\n");
	}
}

void switch_m()
{
	int m_day = 3;
	switch (m_day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	default:
		printf("输入的星期数错误！");
		break;
	}
}
int main()
{
	//if_else();
	switch_m();

	return 0;
}
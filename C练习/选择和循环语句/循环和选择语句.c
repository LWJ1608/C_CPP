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
	switch (m_day)//switch 循环语句
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
void while_m()
{
	int i = 0;
	while (i < 10)//while 循环语句
	{
		if (i == 5)
		{
			continue;//跳出本次循环，在执行下面的循环
			//break;//跳出整个while循环，不再执行while循环
		}
		printf("%d ", i);
		i++;
	}
	int ch = 0;
	while ((ch = getchar()) != EOF)//getchar-获取键盘输入的字符存在缓冲区，回车也算字符（为\n）EOF-文件结束标志（Ctrl+C退出循环）
	{
		putchar(ch);//输出键盘输入的一个字符（复读）
	}
}
void for_m()
{
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			continue;
		}
		printf("%d ", i);
		
	}
}
void do_while()
{
	int i = 0;
	do
	{
		//if (i == 5)
		//{
		//	continue;
		//}
		printf("%d ", i);
		i++;
	} while (i < 10);
}
int main()
{
	//if_else();
	//switch_m();
	for_m();
	//while_m();
	//do_while();
	return 0;
}
#include<stdio.h>

#define _CRT_SECURE_NO_WARNINGS

void if_else()
{
	int Age = 19;
	if (Age < 18)//ѡ����� if...else
	{
		printf("δ���꣬����̸������");
	}
	else
	{
		printf("�ѳ������̸������\n");
	}

	int age = 88;
	if (age < 18)//ѡ����� if...else if
	{
		printf("����\n");
	}
	else if (age > 18 && age < 30)
	{
		printf("����\n");
	}
	else if (age > 30 && age < 40)
	{
		printf("����\n");
	}
	else if (age > 40 && age < 60)
	{
		printf("׳��\n");
	}
	else if (age > 60 && age < 80)
	{
		printf("������\n");
	}
	else
	{
		printf("�ϲ���\n");
	}
}

void switch_m()
{
	int m_day = 3;
	switch (m_day)//switch ѭ�����
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("���������������");
		break;
	}
}
void while_m()
{
	int i = 0;
	while (i < 10)//while ѭ�����
	{
		if (i == 5)
		{
			continue;//��������ѭ������ִ�������ѭ��
			//break;//��������whileѭ��������ִ��whileѭ��
		}
		printf("%d ", i);
		i++;
	}
	int ch = 0;
	while ((ch = getchar()) != EOF)//getchar-��ȡ����������ַ����ڻ��������س�Ҳ���ַ���Ϊ\n��EOF-�ļ�������־��Ctrl+C�˳�ѭ����
	{
		putchar(ch);//������������һ���ַ���������
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
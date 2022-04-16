#include<stdio.h>
//结构体

struct Book//图书
{
	char m_Name[20];//名称
	float m_Price;//价格
	char m_Id[30];//编号
};

struct Student//学生
{
	char m_Name[20];//姓名
	char m_Id[10];//价格
};

int main()
{
	struct Book book = { "C语言程序设计",50,"01717" };
	printf("图书信息如下：");
	printf("%s %lf %s \n", book.m_Name, book.m_Price, book.m_Id);

	struct Student student = { "张三","12313355" };
	printf("学生信息下：");
	printf("%s %s \n", student.m_Name, student.m_Id);
	struct Student * P = &student;
	printf("%s %s \n", P->m_Name, (*P).m_Id);
	return 0;
}

#include<stdio.h>
//�ṹ��

struct Book//ͼ��
{
	char m_Name[20];//����
	float m_Price;//�۸�
	char m_Id[30];//���
};

struct Student//ѧ��
{
	char m_Name[20];//����
	char m_Id[10];//�۸�
};

int main()
{
	struct Book book = { "C���Գ������",50,"01717" };
	printf("ͼ����Ϣ���£�");
	printf("%s %lf %s \n", book.m_Name, book.m_Price, book.m_Id);

	struct Student student = { "����","12313355" };
	printf("ѧ����Ϣ�£�");
	printf("%s %s \n", student.m_Name, student.m_Id);
	struct Student * P = &student;
	printf("%s %s \n", P->m_Name, (*P).m_Id);
	return 0;
}

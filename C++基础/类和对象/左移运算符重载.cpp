#include<iostream>
using namespace std;

class person//学生类 
{
public:
	//person() {};
	//person(int y, int d)
	//{
	//	this->m_year = y;
	//	this->m_day = d;
	//}
	person operator+(const person& p)
	{
		person temp;
		temp.m_year = m_year + p.m_year;
		temp.m_day = m_day + p.m_day;
		return temp;
	}
public:
	int m_year;//年龄 
	int m_day;//天数 
};
void test()
{
	person p1;
	p1.m_day = 12;
	p1.m_year = 12;
	person p2;
	p2.m_day = 12;
	p2.m_year = 33;
	person p3 = p1 + p2;
	cout << p3.m_year << "  " << p3.m_day << endl;
}
int main()
{
	test();
}
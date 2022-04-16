#include<iostream>
using namespace std;
#include<set>

//set容器

//打印
void printSet(const set<int> s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int> s1;//默认构造函数
	s1.insert(40);
	s1.insert(50);
	s1.insert(30);
	s1.insert(20);
	s1.insert(10);
	//printSet(s1);
	set<int> s2(s1);//拷贝构造函数
	//printSet(s2);

	//赋值
	set<int> s3;
	s3 = s2;
	printSet(s3);
}
int main()
{
	test01();
	system("pause");
	return 0;
}
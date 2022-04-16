#include<stdio.h>

//函数（分为库函数和自定义函数）
#include<string.h>


void test01()
{
	int a = 8;
	int b = 9;
	int tmp = a;
	a = b;
	b = tmp;
	printf("a :%d b:%d ", a, b);
}
int main()
{
	////小练一个库函数（strcpy）
	//char ch_1[] = "8wd9d993j";
	//char ch_2[20] = { 0 };
	//strcpy_s(ch_2,10, ch_1);
	//printf("%s", ch_2);

	test01();

	return 0;
}
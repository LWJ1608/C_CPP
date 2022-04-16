#include<stdio.h>


void test01(unsigned int p)
{
	if (p>9)
	{
		test01(p/10);
	}
	printf("%d\t", p%10);
}

int main()
{	
	unsigned int i = 1234;
	test01(i);
	return 0;
}

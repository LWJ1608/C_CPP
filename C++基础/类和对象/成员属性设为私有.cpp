#include<iostream>
using namespace std;
//成员属性设置为私有
//1.可以控制读写权限
//2.对于写可以检验数据准确
class Person
{
public:
	void setName(string name)
	{    
		Name = name;	    
	}
	string getName()
	{ 

		return Name;
	}
	int getAge()
	{
		Age = 21;
		return Age;
	}
	void setLover(string lover)
	{
		Lover = lover;
	}
	//设置年龄
	void setAge(int age)
	{
		if (age < 0 || age>150)
		{
		   cout << "年龄输入错误,请重新输入！" << endl;
		}
		else
		{	  
			Age = age;
		}

	}
private:
	//姓名   可读可写
	string Name;

	//年龄   可读不可写
	int Age;

	//情人   不可读可写
	string Lover;
	//
	//
	//
};
int main()
{
	Person s1;
	s1.setName("廖望钧");
	cout << "姓名为：" << s1.getName() << endl;
	//s1.setAge()错误
	cout << "年龄为：" << s1.getAge() << endl;
	s1.setLover("慧慧");
	//cout << "情人为：" << s1.getLover() << endl;错误
	s1.setAge(991);

	return 0;
}
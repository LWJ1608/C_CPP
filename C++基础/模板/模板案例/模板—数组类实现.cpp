//数组类实现
#include"MyArray.hpp"

//打印数组
void PrintArr(MyArray <int> & arr )
{
	cout << "打印数组元素" << endl;
	for (int i = 0; i < arr.get_size(); i++)
	{ 
		cout << arr[i] << endl;
	}
}
void test01()
{
	MyArray<int> arr1(19);
	MyArray<int>arr2(arr1);
	cout << "测试尾插法------" << endl;
	for (int j = 0; j < 5; j++)
	{
		arr1.Push(j);
	}
	PrintArr(arr1);
	cout << "测试获取数组元素个数------" << endl;
	cout << "arr1元素个数为" << arr1.get_size() << endl;
	cout << "测试获取数组容量------" << endl;
	cout << "arr1容量大小为" << arr1.get_capacity() << endl;

	cout << "执行尾删法测试后------" << endl;
	arr1.Delete();
	PrintArr(arr1);
	cout << "测试获取数组元素个数------" << endl;
	cout << "arr1元素个数为" << arr1.get_size() << endl;
	cout << "测试获取数组容量------" << endl;
	cout << "arr1容量大小为" << arr1.get_capacity() << endl;
}

class Person
{
public:
	string m_name;
	int m_age;
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
};

void Print(MyArray <Person>& person)
{
	for (int i = 0; i < person.get_size(); i++)
	{
		cout << "姓名：" << person[i].m_name << endl;
		cout << "年龄：" << person[i].m_age << endl;
	}
}
//测试自定义数据类型
void test02()
{
	//创建数组
	MyArray<Person> pArray(10);
	Person p1("孙悟空", 30);
	Person p2("韩信", 20);
	Person p3("妲己", 18);
	Person p4("王昭君", 15);
	Person p5("赵云", 24);
	//插入数据
	pArray.Push(p1);
	pArray.Push(p2);
	pArray.Push(p3);
	pArray.Push(p4);
	pArray.Push(p5);
	Print(pArray);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
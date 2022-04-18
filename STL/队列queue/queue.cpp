#include<iostream>
using namespace std;
#include<queue>

//队列
//- `queue<T > que; `                                 //queue采用模板类实现，queue对象的默认构造形式
//- `queue(const queue & que); `            //拷贝构造函数
//
//赋值操作：
//
//- `queue& operator=(const queue & que); `           //重载等号操作符
//
//数据存取：
//
//- `push(elem); `                             //往队尾添加元素
//- `pop(); `                                      //从队头移除第一个元素
//- `back(); `                                    //返回最后一个元素
//- `front(); `                                  //返回第一个元素
//
//大小操作：
//
//- `empty(); `            //判断堆栈是否为空
//- `size(); `              //返回栈的大小
class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	string m_name;
	int m_age;
};

void test01()
{
	Person p1("张三", 33);
	Person p2("李四", 53);
	Person p3("王五", 55);
	queue<Person> q;

	q.push(p1);////往队尾添加元素
	q.push(p2);
	q.push(p3);
	q.pop();//移去队尾的元素
	//q.back();//返回队尾元素
	//q.front();//返回队头的元素
	while (!q.empty())
	{
		cout << "队列大小为：" << q.size() << endl;
		cout << "第一个人的信息：姓名 " << q.front().m_name << " 年龄 " << q.front().m_age << endl;
		cout << "第一个人的信息：姓名 " << q.back().m_name << " 年龄 " << q.back().m_age << endl;
		return ;
	}

}
int main()
{
	test01();
	system("pause");
	return 0;
}

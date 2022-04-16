#include<iostream>
using namespace std;
#include<stack>
//* `push(elem); `      //向栈顶添加元素
//* `pop(); `                //从栈顶移除第一个元素
//* `top(); `                //返回栈顶元素
//
//大小操作：
//
//* `empty(); `            //判断堆栈是否为空
//* `size(); `              //返回栈的大小
//堆栈
void test01()
{
	stack<int> s;
	s.push(10);
	s.push(12);
	s.push(13);
	
	s.pop();
	cout << "栈顶元素为：" << s.top() << endl;
	//大小操作
	if (s.empty())
	{
		cout << "栈为空" << endl;
	}
	else
	{
		cout << "栈大小为：" << s.size() << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}
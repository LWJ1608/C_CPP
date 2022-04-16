#include<iostream>
using namespace std;
#include<vector>

//* `push_back(ele); `                                //尾部插入元素ele
//* `pop_back(); `                                    //删除最后一个元素
//* `insert(const_iterator pos, ele); `               //迭代器指向位置pos插入元素ele
//* `insert(const_iterator pos, int count, ele); `    //迭代器指向位置pos插入count个元素ele
//* `erase(const_iterator pos); `                     //删除迭代器指向的元素
//* `erase(const_iterator start, const_iterator end); //删除迭代器从start到end之间的元素
//* `clear(); `                                       //删除容器中所有元素

//打印容器元素
void PrintVector(vector<int> v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;
	for (int i = 1; i < 5; i++)
	{
		v1.push_back(i);
	}
	PrintVector(v1);//遍历

	v1.pop_back();//尾删
	PrintVector(v1);

	v1.insert(v1.begin(),88);//第一个是迭代器，第二个是插入的数据
	PrintVector(v1);

	v1.insert(v1.begin(), 2, 99);//在迭代器位置插入2个99
	PrintVector(v1);

	v1.erase(v1.begin(), v1.end());//清空
	PrintVector(v1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
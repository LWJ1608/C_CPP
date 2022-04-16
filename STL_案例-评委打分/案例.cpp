#include<iostream>
using namespace std;
#include<deque>
#include<vector>
#include <ctime>
#include <cstdlib>
#include<algorithm>
//选手类
class Player
{
public:
	Player(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name; //姓名
	int m_Score;  //平均分
};
//创建选手，存入vector中
void creatPlayer(vector<Player>& v)
{		
	string needname("ABCDE");
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += needname[i];

		int score = 0;
		Player p(name,score);
		v.push_back(p);
	}
}
//遍历vector
void printVector(const vector<Player>& v)
{
	for (vector<Player>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：	" << it->m_Name << "	平均分：	" << it->m_Score << endl;
	}
}
//创建deque容器存放评委分数
void createDeque(vector<Player>& v)
{
	deque<int> d;
	for (vector<Player>::iterator it = v.begin(); it != v.end(); it++)
	{
		//int k = 0;
		for (int i = 0; i < 10; i++)
		{		
			int j = rand() % 40 + 60;
		    d.push_back(j);
			//cout << "第" << k+ 1 << "个评委的分为：" << j << endl;
			//k++;
		}




		//cout << "测试分数是否插入deque容器成功。" << endl;
		//int num = 1;
		//for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		//{
		//	cout << "第" << num<< "个评委的分为：" << *it;
		//	cout << endl;
		//	num++;
		//}
		//num = 1;

		//排序，去头去尾，求平均
		sort(d.begin(), d.end());
		d.pop_back();//去最高分
		d.pop_front();//去最低分

		//cout << "测试分数是否排序和去分成功。" << endl;
		//int num = 1;
		//for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		//{
		//	cout <<"分数："<< *it;
		//	cout << endl;
		//	num++;
		//}
		//num = 1;

		//求平均分，并赋给选手
		int m = 0;
		int score;
		for (deque<int>::iterator it1= d.begin(); it1!= d.end(); it1++)
		{
			m += *it1;
		}
		score = m / d.size();
		it->m_Score = score;
	}
}
void test01()
{
	vector<Player> V;//创建vector容器
	creatPlayer(V);//创建选手，插入vector中
	//printVector(V);
	createDeque(V);
	printVector(V);

}
int main()
{
	//srand((unsigned int)time(NULL));
	test01();
	system("pause");
	return 0;

}
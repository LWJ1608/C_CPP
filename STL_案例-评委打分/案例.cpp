#include<iostream>
using namespace std;
#include<deque>
#include<vector>
#include <ctime>
#include <cstdlib>
#include<algorithm>
//ѡ����
class Player
{
public:
	Player(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name; //����
	int m_Score;  //ƽ����
};
//����ѡ�֣�����vector��
void creatPlayer(vector<Player>& v)
{		
	string needname("ABCDE");
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += needname[i];

		int score = 0;
		Player p(name,score);
		v.push_back(p);
	}
}
//����vector
void printVector(const vector<Player>& v)
{
	for (vector<Player>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������	" << it->m_Name << "	ƽ���֣�	" << it->m_Score << endl;
	}
}
//����deque���������ί����
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
			//cout << "��" << k+ 1 << "����ί�ķ�Ϊ��" << j << endl;
			//k++;
		}




		//cout << "���Է����Ƿ����deque�����ɹ���" << endl;
		//int num = 1;
		//for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		//{
		//	cout << "��" << num<< "����ί�ķ�Ϊ��" << *it;
		//	cout << endl;
		//	num++;
		//}
		//num = 1;

		//����ȥͷȥβ����ƽ��
		sort(d.begin(), d.end());
		d.pop_back();//ȥ��߷�
		d.pop_front();//ȥ��ͷ�

		//cout << "���Է����Ƿ������ȥ�ֳɹ���" << endl;
		//int num = 1;
		//for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
		//{
		//	cout <<"������"<< *it;
		//	cout << endl;
		//	num++;
		//}
		//num = 1;

		//��ƽ���֣�������ѡ��
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
	vector<Player> V;//����vector����
	creatPlayer(V);//����ѡ�֣�����vector��
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
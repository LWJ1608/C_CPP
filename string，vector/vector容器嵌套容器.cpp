#include<iostream>
using namespace std;
#include<vector>
//ÈÝÆ÷Ç¶Ì×ÈÝÆ÷


void test01()
{
	vector<vector<int>> V;

		vector<int> v1;
		vector<int> v2;
		vector<int> v3;
		vector<int> v4;
		vector<int> v5;

	for (int i = 0; i < 4; i++)
	{
		v1.push_back(1 + i);
		v2.push_back(2 + i);
		v3.push_back(3 + i);
		v4.push_back(4 + i);
		v5.push_back(5 + i);
	}

	V.push_back(v1);
	V.push_back(v2);
	V.push_back(v3);
	V.push_back(v4);
	V.push_back(v5);


	for (vector<vector<int>>::iterator it = V.begin(); it != V.end(); it++)
	{
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit<<" ";
		}
		cout << endl;
	}

}
int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}
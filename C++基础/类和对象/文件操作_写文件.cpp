#include<iostream>
using namespace std;

///д�ļ�
//1. ����ͷ�ļ�
#include<fstream>


void test01()
{
	//2. ����������
	ofstream ofs;
	//3. ���ļ���ʽ
    ofs.open("test.txt", ios::out);
	//4. д����
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺38" << endl;
    //5. �ر��ļ�
    ofs.close();
}




int main()
{
	test01();
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;

///写文件
//1. 包含头文件
#include<fstream>


void test01()
{
	//2. 创建流对象
	ofstream ofs;
	//3. 打开文件方式
    ofs.open("test.txt", ios::out);
	//4. 写数据
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：38" << endl;
    //5. 关闭文件
    ofs.close();
}




int main()
{
	test01();
	system("pause");
	return 0;
}
#pragma once
#include<iostream>
#include"worker.h"
using namespace std;
//��ͨԱ����
class boss :public worker
{
public:
	boss(int m_Id, string m_Name, int m_DeptId);

	//��ʾԱ����Ϣ����
	virtual void showInfo();
	//��ȡԱ����λ����
	virtual string getDeptName();

};
#pragma once
#include<iostream>
#include"worker.h"
using namespace std;
//普通员工类
class boss :public worker
{
public:
	boss(int m_Id, string m_Name, int m_DeptId);

	//显示员工信息函数
	virtual void showInfo();
	//获取员工岗位名称
	virtual string getDeptName();

};
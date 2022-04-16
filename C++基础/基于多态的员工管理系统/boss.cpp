#include"boss.h"
boss::boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

string boss::getDeptName()
{
	return string("老板");
}
void boss::showInfo()
{
	cout << "员工编号：" << m_Id
		<<	"\t员工姓名：" << m_Name
		<<	"\t岗位：" << getDeptName()
		<<	"\t员工职责：管理公司所有事物。" << endl;
}
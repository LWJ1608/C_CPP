#include"boss.h"
boss::boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

string boss::getDeptName()
{
	return string("�ϰ�");
}
void boss::showInfo()
{
	cout << "Ա����ţ�" << m_Id
		<<	"\tԱ��������" << m_Name
		<<	"\t��λ��" << getDeptName()
		<<	"\tԱ��ְ�𣺹���˾�������" << endl;
}
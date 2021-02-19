#define _CRT_SECURE_NO_WARNINGS 1
#include "employee.h"

Employee::Employee (int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = dId;
}
//显示个人信息
void Employee::showInfo()
{
	cout << "职工编号： " << this->m_Id
		<< " \t职工姓名： " << this->m_Name
		<< " \t岗位：" << this->getDepName()
		<< " \t岗位职责：完成经理交给的任务" << endl;
}
//获取岗位名称
string Employee::getDepName()
{
	return string("员工");
}
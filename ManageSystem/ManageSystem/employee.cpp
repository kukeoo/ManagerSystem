#define _CRT_SECURE_NO_WARNINGS 1
#include "employee.h"

Employee::Employee (int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = dId;
}
//��ʾ������Ϣ
void Employee::showInfo()
{
	cout << "ְ����ţ� " << this->m_Id
		<< " \tְ�������� " << this->m_Name
		<< " \t��λ��" << this->getDepName()
		<< " \t��λְ����ɾ�����������" << endl;
}
//��ȡ��λ����
string Employee::getDepName()
{
	return string("Ա��");
}
#define _CRT_SECURE_NO_WARNINGS 1
#include "boss.h"

//���캯��
Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DepId = dId;
}
//��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְ����ţ� " << this->m_Id
		<< " \tְ�������� " << this->m_Name
		<< " \t��λ��" << this->getDepName()
		<< " \t��λְ�𣺹���˾��������" << endl;
}
//��ȡ��λ����
string Boss::getDepName()
{
	return string("�ϰ�");
}
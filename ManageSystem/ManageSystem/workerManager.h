#pragma once
#include <iostream>
#include <iostream>
#include <fstream>
#include "worker.h"
#include "manager.h"
#include "employee.h"
#include "boss.h"

#define FILENAME "empFile.txt"

using namespace std;

class workerManager
{
public:
	//��¼ְ������
	int m_EmpNum;
	//ְ��ָ�������ָ��
	Worker** m_EmpArray;
public:
	//���캯��
	workerManager();
	//չʾ�˵�
	void Show_Menu();
	//�˳�����
	void exitSystem();
	//����Ա��
	void Add_Emp();
	//�����ļ�
	void save();
	//�ж��ļ��Ƿ�Ϊ�� ��־
	bool m_FileIsEmpty;
	//ͳ���ļ��е�����
	int get_EmpNum();
	//��ʼ��Ա��
	void init_Emp();
	//��ʾְ��
	void Show_Emp();
	//ɾ��ְ��
	void Del_Emp();
	//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);
	//�޸�ְ��
	void Mod_Emp();
	//����ְ��
	void Find_Emp();
	//����ְ��
	void Sort_Emp();
	//����ļ�
	void Clean_File();
	//��������
	~workerManager();
};
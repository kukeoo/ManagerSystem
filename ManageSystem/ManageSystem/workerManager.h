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
	//记录职工人数
	int m_EmpNum;
	//职工指针数组的指针
	Worker** m_EmpArray;
public:
	//构造函数
	workerManager();
	//展示菜单
	void Show_Menu();
	//退出函数
	void exitSystem();
	//增加员工
	void Add_Emp();
	//保存文件
	void save();
	//判断文件是否为空 标志
	bool m_FileIsEmpty;
	//统计文件中的人数
	int get_EmpNum();
	//初始化员工
	void init_Emp();
	//显示职工
	void Show_Emp();
	//删除职工
	void Del_Emp();
	//按照职工编号判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
	int IsExist(int id);
	//修改职工
	void Mod_Emp();
	//查找职工
	void Find_Emp();
	//排序职工
	void Sort_Emp();
	//清空文件
	void Clean_File();
	//析构函数
	~workerManager();
};
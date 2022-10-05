//管理文件
#pragma once
# include <iostream>
using namespace std;
# include "worker.h"
# include <fstream>
# define FILENAME "empFile.txt"
# include "workManger.h"
# include "employee.h"
# include "boss.h"
# include "manager.h"

class WorkManager {

public :
	//构造函数
	WorkManager();

	//展示菜单
	void Show_Menu();

	//退出系统
	void ExitSystem();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

	//添加职工函数
	void Add_Emp();

	//保存数据到文件
	void save();

	//判断文件是否为空的标志
	bool m_FileIsEmpyty;

	//获取记录职工人数
	int get_EmpNum();

	//初始化员工
	void inti_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//按照职工编号判断职工是否存在， 若存在返回职工在数组中位置， 不存在返回-1
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
	~WorkManager();
};

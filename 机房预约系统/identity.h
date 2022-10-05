#pragma once
# include <iostream>
# include <string>
using namespace std;

//身份抽象类
class Identity {

public:

	//操作系统
	virtual void operMenu() = 0;

	string m_Name; //用户名
	string m_Pwd;  //密码
};
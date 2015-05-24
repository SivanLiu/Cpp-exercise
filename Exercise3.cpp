/*
题目描述：
	1.提示用户输入姓名
	2.接受用户的输入
	3.然后向用户问好，hello xxx
	4.告诉用户名字的长度
	5.告诉用户名字的首字母
	6.如果用户直接输入回车，那么告诉用户的输入为空
	7.如果用户输入的是imooc,那么告诉用户的角色是一个管理员
*/
#include<iostream>
#include<string>
using namespace std;
/**
  * 定义类：Student
  * 数据成员：名字、年龄
  */
class Student
{
public:
    // 定义数据成员名字 m_strName 和年龄 m_iAge
    string m_strName;
    int m_iAge;
};
int main()
{
	string username;
	cout<<"Please input your username :"<<endl;
	getline(cin,username);
	if(username.empty())
	{
		cout<<"Your input is null!"<<endl;
		return 0;
	}
	if(username=="imocc")
		cout<<"You are administraor!"<<endl;
	cout<<"Hello "<<username<<endl;
	cout<<"The length of your username is :"<<username.size()<<endl;
	cout<<"The first of your username is :"<<username[0]<<endl;

	// 实例化一个Student对象stu
    Student stu;
    // 设置对象的数据成员
    stu.m_strName = "imocc";
    stu.m_iAge = 12;
    
    // 通过cout打印stu对象的数据成员
    cout <<stu.m_strName << " " <<stu.m_iAge<< endl;
	return 0;
}
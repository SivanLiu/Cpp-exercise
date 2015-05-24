/* 数据的封装
定义一个Teacher类，要求分别采用同文件类定义和分文件类外定义的方式完成，具体要求如下：
	数据成员：
		名字
		年龄
		性别
	成员函数：
		数据成员的封装函数
		授课teach
*/
#include<iostream>
#include<string>
#include"Teacher.h"
using namespace std;

int main()
{
	Teacher teacher;
	teacher.setName("孔子");
	teacher.setAge(88);
	teacher.setGender("男");
	cout<<teacher.getName()<<" "<<teacher.getAge()<<" "<<teacher.getGender()<<" ";
	teacher.teach();
	return 0;
}
#include<iostream>
#include<string>
#include"Teacher.h"
using namespace std;
/* 
Teacher类
	自定义析构函数
	普通方式实例化的对象，在销毁对象时自动调用析构函数
	通过拷贝构造函数实例化对象，在销毁对象时是否自动调用析构函数
	自定义拷贝构造函数
	自定义有参数默认构造函数
	使用初始化列表初始化数据
数据：
	名字
	年龄
成员函数：
	数据成员的封装函数
拓展：
	定义可以带最多学生的个数，此为常量
*/
int main()
{
	Teacher t1;
	cout<<t1.getName()<<" "<<t1.getAge()<<" "<<t1.getMax()<<endl;
	Teacher t2("John",25,98);
	cout<<t2.getName()<<" "<<t2.getAge()<<" "<<t2.getMax()<<endl;
	Teacher t3(t1);
	Teacher t4=t3;
	return 0;
}
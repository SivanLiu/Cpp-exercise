#include<iostream>
#include<string>
#include"Teacher.h"
using namespace std;
Teacher::Teacher(string name,int age,int max):m_TecName(name),m_TecAge(age),m_Max(max)
{
	cout<<"Teacher(name,age)"<<endl;
}
Teacher::Teacher(const Teacher &tea):m_TecName(tea.m_TecName),m_TecAge(tea.m_TecAge),m_Max(tea.m_TecAge){
	cout<<"Teacher(const Teacher &tea)"<<endl;
}
Teacher::~Teacher()
{
	cout<<"~Teacher()"<<endl;
}
void Teacher::setName(string _name)
{
	m_TecName=_name;
}
string Teacher::getName()
{
	return m_TecName;
}
void Teacher::setAge(int _age)
{
	m_TecAge=_age;
}
int Teacher::getAge()
{
	return m_TecAge;
}
void Teacher::setGender(string _gender)
{
	m_TecGender=_gender;
}
string Teacher::getGender()
{
	return m_TecGender;
}
int Teacher::getMax()
{
	return m_Max;
}
void Teacher::teach()
{
	cout<<"ÕýÔÚÉÏ¿Î..."<<endl;
}

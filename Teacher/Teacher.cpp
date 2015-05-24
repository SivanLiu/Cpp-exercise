#include<iostream>
#include<string>
#include"Teacher.h"
using namespace std;

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
void Teacher::teach()
{
	cout<<"ÕýÔÚÉÏ¿Î..."<<endl;
}

/* 数据的封装
定义一个Student类，含有如下信息：
	1.姓名：name 
	2.性别：gender
	3.学分(只读):score
	4.学习：study
*/
#include<iostream>
#include<string>
using namespace std;

class Student{
public:
	void setName(string _name)
	{
		m_name=_name;
	}
	string getName()
	{
		return m_name;
	}
	void setGender(string _gender)
	{
		m_gender=_gender;
	}
	string getGender( )
	{
		return m_gender;
	}
	int Getscore()
	{
		return m_score;
	}
	void initScore()
	{
		m_score=0;
	}
	void studey(int _score)
	{
		m_score+=_score;
	}
private:
	string m_name;
	string m_gender;
	int m_score;
};
int main()
{
	Student stu;
	//注意分数必须初始化
	stu.initScore();
	stu.setName("小明");
	stu.setGender("男");
	
	stu.studey(89);
	stu.studey(18);
	cout<<stu.getName()<<endl;
	cout<<stu.getGender()<<endl;
	cout<<stu.Getscore()<<endl;

	return 0;
}
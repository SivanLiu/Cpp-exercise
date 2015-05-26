#include<iostream>
#include<string>
using namespace std;
class Teacher
{
public:
	Teacher(string name="Tom",int age=22,int m_Max=100);
	Teacher(const Teacher &tea);
	~Teacher();
	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();
	void setGender(string _gender);
	string getGender();
	int getMax();
	void teach();
private:
	string m_TecName;
	int m_TecAge;
	string m_TecGender;
	const int m_Max;
};

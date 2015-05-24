
#include<iostream>
#include<string>

using namespace std;
class Teacher
{
public:
	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();
	void setGender(string _gender);
	string getGender();
	void teach();
private:
	string m_TecName;
	int m_TecAge;
	string m_TecGender;
};

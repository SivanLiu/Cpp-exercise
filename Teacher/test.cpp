/* ���ݵķ�װ
����һ��Teacher�࣬Ҫ��ֱ����ͬ�ļ��ඨ��ͷ��ļ����ⶨ��ķ�ʽ��ɣ�����Ҫ�����£�
	���ݳ�Ա��
		����
		����
		�Ա�
	��Ա������
		���ݳ�Ա�ķ�װ����
		�ڿ�teach
*/
#include<iostream>
#include<string>
#include"Teacher.h"
using namespace std;

int main()
{
	Teacher teacher;
	teacher.setName("����");
	teacher.setAge(88);
	teacher.setGender("��");
	cout<<teacher.getName()<<" "<<teacher.getAge()<<" "<<teacher.getGender()<<" ";
	teacher.teach();
	return 0;
}
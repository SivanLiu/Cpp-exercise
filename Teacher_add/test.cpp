#include<iostream>
#include<string>
#include"Teacher.h"
using namespace std;
/* 
Teacher��
	�Զ�����������
	��ͨ��ʽʵ�����Ķ��������ٶ���ʱ�Զ�������������
	ͨ���������캯��ʵ�������������ٶ���ʱ�Ƿ��Զ�������������
	�Զ��忽�����캯��
	�Զ����в���Ĭ�Ϲ��캯��
	ʹ�ó�ʼ���б��ʼ������
���ݣ�
	����
	����
��Ա������
	���ݳ�Ա�ķ�װ����
��չ��
	������Դ����ѧ���ĸ�������Ϊ����
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
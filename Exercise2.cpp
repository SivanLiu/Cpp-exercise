/*
内存申请、回收
*/
#include<iostream>
using namespace std;
int main()
{
	/*
	*申请单个内存
	*/
	int *p=new int();
	if(p==NULL)
	{
		system("pause");
		return 0;
	}
	*p=10;
	cout<<*p<<endl;
	//释放内存
	delete p;
	p=NULL;
	/*
	*申请多个内存
	*/
	int *q=new int[100];
	if(q==NULL)
	{
		system("pause");
		return 0;
	}
	for(int i=0;i<100;++i)
	{
		*(q+i)=i;
		cout<<*(q+i)<<endl;
	}
	//释放内存
	delete []q;
	q=NULL;
	/*
	*在堆中申请100个char类型的内存，拷贝Hello imooc字符串到分配的堆中的内存中,打印字符串,最后释放内存。
	*/
    //在堆中申请100个char类型的内存
    char *str = new char[100];
    //拷贝Hello C++字符串到分配的堆中的内存中
	strcpy(str, "Hello imooc");
    //打印字符串
    cout<<str<<endl;
    //释放内存
	delete []str;
    str=NULL;
	return 0;
}
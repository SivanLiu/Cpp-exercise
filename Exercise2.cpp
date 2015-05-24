/*
内存申请、回收
*/
#include<iostream>
using namespace std;
//定义一个坐标类：两个成员变量，两个成员函数
class Coordinate
{
public:
	int x;
	int y;
	void printX()
	{
		cout<<"x="<<x<<endl;
	}
	void printY()
	{
		cout<<"y="<<y<<endl;
	}
};
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
	
	//定义在栈中的对象
	Coordinate coordinate;
	coordinate.x=10;
	coordinate.y=20;
	coordinate.printX();
	coordinate.printY();

	//定义在堆中的对象
	Coordinate *coordinate1=new Coordinate;
	if(coordinate1==NULL)
	{
		//如果申请内存失败，直接返回
		return 0;
	}
	coordinate1->x=100;
	coordinate1->y=200;
	coordinate1->printX();
	coordinate1->printY();
	delete coordinate1;
	coordinate1=NULL;
	
	return 0;
}
/*
bool类型 命名空间 输入输出
题目要求：
使用一个函数找出一个整型数组中最大值或者最小值
*/
#include<iostream>
using namespace std;
namespace CompanyA
{
int isMinOrMax(int *arr,int n,bool iS)//arr为数组名，n为数组中包含的元素个数，iS代表求最大值或者最小值
{
	int result=arr[0];//初始化最大值或者最小值
		for(int i=1;i<n;++i)
		{
			if(iS)//如果iS为真，表示求最大值，反之求最小值
			{
				if(result<arr[i])
					result=arr[i];
			}
			else
			{
				if(result>arr[i])
					result=arr[i];
			}
		}
	return result;
}
}
int main()
{
	int arr[5]={67,2111,33,43333,732};
	bool iS=true;
	cin>>iS;
	cout<<CompanyA::isMinOrMax(arr,5,iS)<<endl;
	return 0;
}
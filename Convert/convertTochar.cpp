#include<iostream>
#include<string>
#include<iostream>
using namespace std;
/**
*用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），
*换个格式来输出任一个不超过3位的正整数。例如234应该被输出为BBSSS1234，
*因为它有2个“百”、3个“十”、以及个位的4。 
*/
void toArray(int num)
{
	int s[3]={0,0,0},i=1,j=0,t;
	while(num>0)
	{
		s[j++]=num%(i*10);
		num=num/10;
	}
	for(int i=0,j=2;i<3&&i!=j;i++,j--)
	{
		t=s[i];s[i]=s[j];s[j]=t;
	}
	int sum=0;
	for(i=0;i<3;i++)
	{	sum+=s[i];
		
	}
	
	char result[100]={};	
	for(int i=0,j=1;i<sum;++i)
	{
		if(s[0]!=0&&i<s[0])
		{result[i]='B';}
		else if(i<(s[0]+s[1])&&i>=s[0])
		{
			result[i]='S';
		}
		else 
		{result[i]=j+'0';j++;}
	}		
	for(int k=0;k<sum;k++)
		cout<<result[k];
	cout<<endl;
}
int main()
{
	int num=9;
	toArray(num);
	return 0;
}
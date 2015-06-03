#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string word;
	vector<string> v2;
	while(cin>>word)
	{	if(word=="00")//如果字符串等于“00”，退出循环
			break;
		v2.push_back(word);
	}
	for(auto &s:v2)
		for(auto &c:s)
		{
			c=toupper(c);
		}
		for(decltype(v2.size()) i=0;i!=v2.size();++i)
		{
			cout<<v2[i]<<" ";
		}
		return 0;
		
	}
	

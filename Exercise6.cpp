#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int num;
	vector<int> ivec;
	while(cin>>num)
	{
		if(num==0)
			break;
		ivec.push_back(num);
	}
	for(decltype(ivec.size()) i=0,j=i+1;i<ivec.size()-1&&j<ivec.size();++i,++j)
		{
			
				cout<<(ivec[i]+ivec[j])<<" ";
		}
	cout<<endl;
	for(decltype(ivec.size()) i=0,j=ivec.size()-1;i<=j;++i,--j)
		{
			if((ivec[i])==ivec[j])
				cout<<ivec[i]<<" ";
			else
				cout<<(ivec[i]+ivec[j])<<" ";
		}
	return 0;
}
	

#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main(int argc, const char * argv[])
{
    
    vector<string> ivec;
    string ss;
    while(cin>>ss&&ss!="null")
        ivec.push_back(ss);
    //cnt表示当前单词出现的次数，pre表示出现次数最多单词的次数
    int cnt=0,pre=0;
    //str表示当前的单词，prestr表示出现次数最多的单词
    string str="",prestr="";
    for(auto i=ivec.begin();i!=--ivec.end();++i)
        for(auto j=++ivec.begin();j!=ivec.end();++j)
        { if(*i==*j)
            {
                cnt++;
                str=*i;
            }
            else
                cnt=0;
            if(cnt>pre)
            {
                pre=cnt;prestr=str;
            }
            
        }
    
    cout<<"单词："<<prestr<<"出现的次数最多："<<pre<<endl;
                    return 0;
}


#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int len=str.length();
    string ans;
    int i=0;
    while(i<len) 
    {
        if(str[i]=='.')
        {
            ans.append("0");
            i=i+1;
        }
        else if(str[i]=='-')
        {
            if(str[i+1]=='.')
            ans.append("1");
            else if(str[i+1]=='-')
            ans.append("2");
            i=i+2;
        }
    }
    cout<<ans<<endl;
}
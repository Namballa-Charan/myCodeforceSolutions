#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    string str,sub;
    cin>>str;
    int len=str.length(),flag=1;
    for(int i=0;i<len;)
    {
        if(str[i]=='1' && str[i+1]=='4' && str[i+2]=='4')
        i+=3;
        else if(str[i]=='1' && str[i+1]=='4')
        i+=2;
        else if(str[i]=='1')
        i++;
        else
        {
            i++;
            flag=0;
        }
    }
    if(flag==0)
    cout<<"NO"<<"\n";
    if(flag==1)
    cout<<"YES"<<"\n";
}
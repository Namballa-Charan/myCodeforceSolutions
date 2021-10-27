#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;
    string ans[x.length()];
    for(int i=0;i<x.length();i++)
    {
        if(int(x[i])^int(y[i]))
        ans[i]='1';
        else
        ans[i]='0';
    }
    for(int i=0;i<x.length();i++)
    cout<<ans[i];
}
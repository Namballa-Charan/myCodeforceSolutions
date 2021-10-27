#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
    string str;
    int count_lc=0, count_uc=0;
    cin>>str;
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(isupper(str[i]))
        count_uc++;
        else if(islower(str[i]))
        count_lc++;
    }
    if(count_lc>=count_uc)
    {
        transform(str.begin(), str.end(),str.begin(),::tolower);
    }
    else
    {
        transform(str.begin(),str.end(),str.begin(),::toupper);
    }
    cout<<str<<endl;
}
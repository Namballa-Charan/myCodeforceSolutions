#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    string str,ans;
    cin>>str;
    int len=str.length();
    for(int i=0; i<len;)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            if(ans.length()>0) ans.append(" ");
            i+=3;
        }
        else
        {
            char temp=str[i];
            ans+=temp;
            i++;
        }
    }
    cout<<ans<<"\n";
}
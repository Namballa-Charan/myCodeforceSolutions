#include<iostream>
#include<string>
#define ll long long
using namespace std;

int main()
{
    ll int n;
    cin>>n;
    string str;
    str=to_string(n);
    int ans=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='4' || str[i]=='7'){
            //cout<<str[i]<<endl;
        ans++;
        }
    }
    //cout<<ans<<endl;
    if(ans==4 || ans==7){
    cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
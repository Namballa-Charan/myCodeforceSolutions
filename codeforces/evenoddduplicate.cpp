#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,index;
    cin>>n>>index;
    long long int half;
    if(n%2==0)
    half=n/2;
    else
    half=n/2+1;
    //cout<<half<<"\n";
    long long int odd,even;
    if(index<=half)
    {
        odd=2*(index-1)+1;
        cout<<odd<<"\n";
    }
    else
    {
        even=2*(index-half);
        cout<<even<<"\n";
    }
}
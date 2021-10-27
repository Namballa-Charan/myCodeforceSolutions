#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int prev=1,curr,count=0;
    long long int ans = 0;
    for (int i = 0; i < m; i++)
    {
        cin>>curr;
        if(prev<curr)
        {
            ans+=(curr-prev);
        }
        if(prev>curr)
        {
            count++;
            ans+=n-prev+curr;
        }
        prev=curr;
    }
    cout<<ans<<"\n";
}
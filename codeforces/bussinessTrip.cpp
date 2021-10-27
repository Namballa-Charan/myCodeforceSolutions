#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,arr[12];
    cin>>n;
    for(int i=0;i<12;i++) cin>>arr[i];

    sort(arr,arr+12);
    //for(int i=0;i<12;i++) cout<<arr[i]<<' ';
    int ans=0,count=1;
    if(n==0) cout<<"0"<<"\n";
    else{
    for(int i=11;i>=0;i--)
    {
        ans+=arr[i];
        //cout<<ans<<"\n";
        if(ans>=n)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    if(count>12) cout<<"-1"<<"\n";
    else cout<<count<<"\n";
    }
}
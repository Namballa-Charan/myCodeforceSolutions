#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],ans=0;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<m;i++)
    {
        if(arr[i]<0)
        ans+=arr[i];
    }
    
    cout<<abs(ans)<<"\n";
}
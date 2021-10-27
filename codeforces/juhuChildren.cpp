#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],max=0,ans;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(max<=arr[i]){
        max=arr[i];
        }
    }
    if(max<=m){
    ans=n;
    cout<<ans<<"\n";
    }
    else
    {
        for(int i=0;i<ceil(float(max)/m);i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[j]>0)
                {
                    arr[j]=arr[j]-m;
                    ans=(j+1);
                }
            }
            //cout<<i<<"\n";
        }
        //cout<<max<<"\n";
        cout<<ans<<"\n";
    }
}
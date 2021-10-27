#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        int x=arr[i][0];
        int y=arr[i][1];
        int r=0,l=0,u=0,b=0;
        for(int j=0;j<n;j++)
        {
            if(x<arr[j][0] && y==arr[j][1])
            l++;
            else if(x>arr[j][0] && y==arr[j][1])
            r++;
            else if(x==arr[j][0] && y>arr[j][1])
            u++;
            else if(x==arr[j][0] && y<arr[j][1])
            b++;

            if(l>0 && r>0 && u>0 && b>0)
            {
                if((l+r+u+b)>=4)
                count++;
                break;
            }
        }
    }
    cout<<count<<"\n";
}
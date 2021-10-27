#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int min = INT_MAX,temp,a,b;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==0)
            {
                j=n-1;
                temp = abs(arr[i] - arr[j]);
                if (min > temp && temp >= 0)
                {
                    min = temp;
                    a = i + 1;
                    b = j + 1;
                }
            }
            else if(j==i+1 || j==i-1)
            {
                temp=abs(arr[i]-arr[j]);
                if(min>temp && temp>=0){
                min=temp;
                a=i+1;
                b=j+1;
                }
            }   
        }
    }
    cout<<a<<" "<<b<<"\n";
}
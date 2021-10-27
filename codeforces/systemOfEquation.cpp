#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int a,b,count=0;
    int temp1, temp2;
    if(m!=n && (m/n==n || n/m==m))
    {
        count=1;
        //cout<<"inside this if";
    }
    else
    {
        for(a=0;a<=m;a++)
        {
            for(b=0;b<=n;b++)
            {
                temp1=(a*a)+b;
                temp2=a+(b*b);
                if(temp1==n && temp2==m)
                {
                    //cout<<a<<b; 
                    count+=1;
                }
            }
        }
    }
    cout<<count<<"\n";
}
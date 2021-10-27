#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n,val;
    cin>>n;
    int i=0,count0=0,count5=0;
    string str;
    while(i<n)
    {
        cin>>val;
        if(val==0)
        {
            count0++;
        }
        else if(val==5)
        {
            count5++;
        }
        i++;
    }
    if(count0==0)
    {
        cout<<"-1"<<"\n";
    }
    else if(count0>0 && count5<9)
    {
        cout<<"0"<<"\n";
    }
    else
    {
        int temp=count5/9;
        int i=temp*9;
        while(i>0)
        {
            str.append("5");
            i--;
        }
        while(count0>0)
        {
            str.append("0");
            count0--;
        }
        cout<<str<<"\n";
    }
}
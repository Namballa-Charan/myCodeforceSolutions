#include <iostream>
using namespace std;
int checkPrime(int x)
{
    int flag=0;
    for(int i=2;i<=(x/2);i++)
    {
        if(x%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    return 0;
    else
    return 1;
}
int nextPrime(int x,int y)
{
    int flag=0,temp;
    for(int k=x+1;k<=50;k++)
    {
        flag=checkPrime(k);
        temp=k;
        if(flag==1)
        break;
    }
    if(temp==y && flag==1)
    return 1;
    else
    return 0;
}
int main()
{
    int x,y;
    cin>>x>>y;
    int ansX=checkPrime(x);
    int ansY=checkPrime(y);
    int ans=nextPrime(x,y);
    if(ans==1)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}

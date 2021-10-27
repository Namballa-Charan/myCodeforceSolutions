#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int l(0),b(0),h(0),ans(0);
    l=(sqrt((x*y)/z));
    b=(sqrt((y*z)/x));
    h=(sqrt((x*z)/y));
    ans=4*(l+b+h);
    cout<<ans<<"\n";
}
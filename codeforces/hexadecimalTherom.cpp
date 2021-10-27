#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
int fibonacci(int n) 
{
    if(n<=1)
    return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n,sum=0,a=0,b=1;
    vector<long int> v;
    cin>>n;
    int temp;
    while(sum <= n)
    {
        v.push_back(sum);
        a = b;  // swap elements
        b = sum;
        sum = a + b;  // next term is the sum of the last two terms     
    }
    int len=v.size();
    if(n>=2)
    cout<<v[0]<<" "<<v[len-3]<<" "<<v[len-2]<<"\n";
    if(n==1)
    cout<<v[0]<<" "<<v[0]<<" "<<"1"<<"\n";
    if(n==0)
    cout<<"0"<<" "<<"0"<<" "<<"0"<<"\n";
    //cout<<sum<<" "<<"\n";
}
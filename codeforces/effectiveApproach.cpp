#include <iostream>
using namespace std;

int main()
{
    int n,a,index[100001];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        index[a]=i;
    }
    int m,countV=0,countP=0;
    cin>>m;
    int temp;
    while(m--)
    {
        cin>>temp;
        countV+=index[temp];
        countP+=(n+1)-(index[temp]);
    }
    cout<<countV<<" "<<countP<<"\n";   
}
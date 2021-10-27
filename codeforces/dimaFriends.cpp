#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int tpeople=n+1;
    int sum=0,temp,ans=0;
    while(n>0)
    {
        cin>>temp;
        sum+=temp;
        n--;
    }
    for (int i = 1; i <= 5; ++i)
    {
        if ((sum + i) % (tpeople) != 1)
        {
            ans += 1;
        }
    }

    cout<<ans<<"\n";
}
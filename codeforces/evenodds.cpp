#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int n,index;
    cin>>n>>index;
    index=index-1;
    long long int arr[n];
    long long int odd=1,even=2,b=ceil(n/2);
    for(long int i=0;i<n;i++)
    {
        if(n%2==0)
        {
            if(i<b)
            {
                arr[i]=odd;
                odd+=2;
            }
            else
            {
                arr[i]=even;
                even+=2;
            }
        }
        if (n % 2 != 0)
        {
            if (i <= b)
            {
                arr[i] = odd;
                odd += 2;
            }
            else
            {
                arr[i] = even;
                even += 2;
            }
        }
    }    
    //cout<<arr[index]<<"\n";
    //for(int i=0;i<n;++i)
    cout<<arr[index]<<"\n";
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[7], max, ans=0;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    max=arr[0];
    int i(0);
    while(max<n)
    {
        i++;
        i=i%7;
        max+=arr[i];
    }
    cout<<i+1<<"\n";
}
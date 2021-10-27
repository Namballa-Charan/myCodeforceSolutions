#include <iostream>
#include<algorithm>
using namespace std;
int func(int i,int arr[])
int main()
{
    int t;          //testcases in one set
    cin>>t;
    while(t--)
    {
        int n;      //array lenght
        cin>>n;
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(i%2==0)
            {
                func(i,arr[])
            }
            else if(i%2!=0){
                for (int j = 1; j < n - 1; j + 2)
                {
                    if (arr[i] > arr[i + 1])
                    {
                        int temp;
                        temp = arr[i + 1];
                        arr[i + 1] = arr[i];
                        arr[i] = temp;
                    }
                }
                count++;
            }
        }
        cout<<count<<endl;
    }
}
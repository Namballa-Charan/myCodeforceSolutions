#include<iostream>
using namespace std;

int sum(int arr[],int size);
int main()
{
    int n;
    cin>>n;
    int  x[n],y[n],z[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    int x_sum=sum(x,n);
    int y_sum=sum(y,n);
    int z_sum=sum(z,n);
    if(x_sum!=0 || y_sum!=0 || z_sum!=0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int sum(int arr[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
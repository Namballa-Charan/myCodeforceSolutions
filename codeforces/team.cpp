#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b,c;      //stores binary for wheather the friend know the ans or not
    int count = 0;
    while(n--){
        cin>>a>>b>>c;
        int ans = a+b+c;
        if(ans>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
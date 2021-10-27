/*required output:GBGGB
for 5 1
BGGBG*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    char str[n];
    cin>>str;
    while(t>0)
    {
        int i=0;
        while(i<n-1)
        {            
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                char temp;
                temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
                i=i+2;
            }
            else{
                i=i+1;
            }
        }
        t=t-1;
    }
    cout<<str<<endl;
}
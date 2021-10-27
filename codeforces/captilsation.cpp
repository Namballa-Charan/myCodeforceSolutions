#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    int n=str[0];
    if(str[0]>=97 && str[0]<=122)
    {
        str[0]-=32;
        //cout<<str[0]<<endl;
    }
    cout<<str<<endl;
}
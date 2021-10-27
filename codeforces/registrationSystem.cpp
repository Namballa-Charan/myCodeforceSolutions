#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int i=0;
    string name1;
    string name[n],arr[n];
    int count,flag=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        cin>>name1;
        if(i==0){
        name[i]=name1;
        arr[i]=name1;
        }
        else{
        for(int j=0;j<i;j++)
        {
            arr[i]=name1;
            name[i] = name1;
        }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==name[i])
        cout<<"OK"<<"\n";
        else
        cout<<name[i]<<"\n";
    }
}

/*
4
abacaba
acaba
abacaba
acab
*/
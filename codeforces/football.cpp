#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count0=0;
    int count1=0;
    if(str.length()<=7)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        string subStr;
        for(int i=0;i<str.length()-8;i++)
        {
            subStr=str.substr(i,i+7);
            for(int i=0;i<subStr.length()-1;i++)
            {
                
            }

        }
    }
}
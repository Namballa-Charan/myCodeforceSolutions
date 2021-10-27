#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string txt;
        cin>>txt;
        int txtLen = txt.length();
        //cout<<txtLen<<endl;
        if(txtLen<=10)
        cout<<txt<<endl;
        else if(txtLen>10)
        {
            int ans=txtLen-2;
            cout<<txt[0]<<""<<ans<<""<<txt[txtLen-1]<<endl;
        }
    }
}
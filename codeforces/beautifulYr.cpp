#include <iostream>
#include <string>

using namespace std;

int main()
{
    int yr;
    string str;
    cin>>yr;
    yr=yr+1;
    int ans,flag=0;
    for(int i=yr;i<=10000;i++)
    {
        str = to_string(i);
        if (str[0] != str[1] && str[0] != str[2] && str[0] != str[3])
        {
            if (str[1] != str[2] && str[1] != str[3] && str[2] != str[3])
            {
                ans=i;
                flag=1;
                cout<<ans<<endl;
            }
        }
        if(flag==1)
        break;
    }
}
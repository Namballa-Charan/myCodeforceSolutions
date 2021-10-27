#include<iostream>
using namespace std;

int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    int loc_r,loc_c;
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr[i][j]==1)
            {
                loc_r=i+1;
                loc_c=j+1;
            }
        }
        
    }
    //cout<<loc_r<<" "<<loc_c<<endl;
    if(loc_r==loc_c && loc_c==3)
    {
        count=0;
        //cout<<count<<endl;
    }
    else
    {
        if(loc_r<=3 && loc_c<=3)
        {
            count=count+(3-loc_r);
            count=count+(3-loc_c);
            //cout<<count<<endl;
        }
        else if(loc_r>=3 && loc_c<=3)
        {
            count=count+(loc_r-3);
            count=count+(3-loc_c);
            //cout<<count<<endl;
        }
        else if (loc_r <= 3 && loc_c >= 3)
        {
            count = count + (loc_c - 3);
            count = count + (3 - loc_r);
            //cout << count << endl;
        }
        else if (loc_r >= 3 && loc_c >= 3)
        {
            count = count + (loc_r - 3);
            count = count + (loc_c-3);
            //cout << count << endl;
        }
        
    }
    cout << count << endl;
}
    
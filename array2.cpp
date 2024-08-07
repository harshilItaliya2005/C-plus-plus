#include<iostream>

using namespace std;

int main() 
{
    int a[5][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter The Value Of a["<<i<<"]["<<j<<"]";
            cin>>a[i][j];
        }
        cout<<endl;    
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;    
    }

    return 0;
}
#include<iostream>

using namespace std;

int main() 
{
    int sum = 0;
    cout<<"Odd Between 1 To 100"<<endl;
    for (int odd = 1; odd <= 100; odd++)
    {
        if (odd % 2 == 1)
        {
            cout<<odd<<endl;
            sum = sum + odd;
        }
        
    }
    cout<<"Odd Number Between 1 To 100 Sum Is : "<<sum<<endl;


    cout<<"Even Between 1 To 100"<<endl;
    for (int even = 0; even <= 100; even++)
    {
        int sum = 0;
        if (even % 2 == 0)
        {
            cout<<even<<" "<<endl;
            sum = sum + even;
        }
    }
    cout<<"Even Number Between 1 To 100 Sum Is : "<<sum<<endl;
    
    
    return 0;
}
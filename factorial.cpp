#include<iostream>

using namespace std;

int main()
{
    int n,fact = 1;
    cout<<"Enter THe Name Of Factorial : ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout<<n<<" This Number Is Factorial : "<<fact;
    
    return 0;
}
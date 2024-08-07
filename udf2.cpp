#include<iostream>

//no return with argument
using namespace std;

void func(int r, int t)
{
    cout<<"Sum Is : "<<r+t; 
}

int main()
{
    int a = 50, b = 40;
    func(a,b);
}
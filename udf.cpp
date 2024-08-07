#include<iostream>

//no return with argument
// h.w simple intersce 
// factorial user input
using namespace std;

void func()
{
    int a = 90, b = 40,sum = 0;

    sum = a + b;
    cout<<"Sum Is : "<<sum<<endl;
}

int main()
{
    cout<<"Before Function call"<<endl;
    func();
    cout<<"After Funcation Call";

    return 0;
}
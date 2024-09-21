#include <iostream>

using namespace std;

int fib(int a)
{
    if (a <= 1)
    {
        return a;
    }
    else
    {
        return fib(a - 1) + fib(a - 2); 
    }
    
}
int main()
{
    int f;
    cout << "Enter the number :- ";
    cin >> f;

    cout << "----------Fibonacci Series----------" << endl;
    for (int i = 0; i < f; i++)
    {
        cout << fib(i) << " ";
    }
    
    
    return 0;
}
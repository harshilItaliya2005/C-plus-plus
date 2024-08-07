#include <iostream>

using namespace std;

void calculateFactorial(int num);

int main()
{
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    calculateFactorial(number);

    return 0;
}

void calculateFactorial(int num)
{
    long long factorial = 1;

    for (int i = 1; i <= num; ++i)
    {
        factorial *= i;
    }
    cout<<"Factorial of "<<num<<" = "<<factorial<<endl;
}

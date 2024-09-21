#include <iostream>

using namespace std;
int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    int result = fact(number);

    cout << "Factorial of " << number << " is " << result << endl;

    return 0;
}
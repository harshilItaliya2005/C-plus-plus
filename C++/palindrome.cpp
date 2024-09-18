#include <iostream>

using namespace std;

int main()
{
    int i, num, rem, sum;

    cout << "Enter The Number : ";
    cin >> num;

    i = num;
    sum = 0;

    while (num > 0)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        num /= 10;
    }

    if (i == sum)
    {
        cout << i << " Is A Palindrome Number." << endl;
    }
    else
    {
        cout << i << " Is Not A Palindrome Number." << endl;
    }

    return 0;
}
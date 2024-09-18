#include <iostream>

using namespace std;

int main()
{

    int num, i = 1, sum, n = 0;

    cout << "Enter The Number : ";
    cin >> num;

    sum = 0;
    i = num;

    while (num > 0)
    {
        n = num % 10;
        num = num / 10;
        sum = sum + (n * n * n);
    }
    if (sum == i)
    {
        cout << i << " This Number Is Amstrong Number." << endl;
    }
    else
    {
        cout << i << " This Number Is Not An Amstrong Number." << endl;
    }

    return 0;
}
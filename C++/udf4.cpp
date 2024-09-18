#include <iostream>

using namespace std;

//with return with argument

int sum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int x, y;
    cout << "X : ";
    cin >> x;

    cout << "Y : ";
    cin >> y;

    cout << "Sum Is : " << sum(x, y);
}
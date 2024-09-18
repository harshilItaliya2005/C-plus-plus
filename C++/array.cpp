#include <iostream>

using namespace std;

int main()
{
    int a[5];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Value of a[" << i << "] : ";
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cout << endl << "a[" << i << "] : " << a[i];
    }
    
    return 0;
}
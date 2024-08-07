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
        cout << endl
             << "a[" << i << "] : " << a[i];
    }
    return 0;
}

// h.w
/*
    **one diamtion array**
    1. 2 array insert and go to tha addition
    2. revers array
    3. descending and assending
    4. last element add the new element 
    5. postion element
*/
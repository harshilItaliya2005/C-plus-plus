#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    char a[100];

    cout << "Enter The String :- ";
    cin >> a;

    int size = strlen(a);

    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i];
    }

    cout << endl;
    

    

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    char a[100];

    cout << "Enter String :- ";
    // cin >> a;

    cin.getline(a, 100);
    
    cout << "\nString :- " << a;

    return 0;
}
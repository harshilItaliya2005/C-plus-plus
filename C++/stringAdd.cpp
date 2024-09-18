#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100];
    char b[100];
    char add[100];

    cout << "Enter The First String :- ";
    cin.getline(a, 100);

    cout << "Enter The Second String :- ";
    cin.getline(b, 100);

    strcpy(add, a);
    strcat(add, b);

    cout << "Added The String :- " << add;
    return 0;
}
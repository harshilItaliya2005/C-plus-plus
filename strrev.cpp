#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    char name[10];
    cout << "Enter The Name : ";
    //cin >> name;
    gets(name);
    cout << endl
         << "String Revers Is : " << strrev(name);

    return 0;
}
#include <string.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    char str[20], str1[20];
    cout << "Enter The String : ";
    cin >> str;
    cout << "Enter The String 1 : ";
    cin >> str1;

    if (strcmpi(str, str1) == 0)
    {
        cout << endl
             << "Both Are Same";
    }
    else
    {
        cout << endl
             << "Both Are Not Same";
    }
    // strcpy(), strcat(), strcmp(), strcmpi(), strrev(), strupr(), strlwr(), strlen()
    return 0;
}
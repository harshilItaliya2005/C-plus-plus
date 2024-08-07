#include <iostream>
#include <cctype> 

using namespace std;
// use of const char* :- This means that the character data pointed to by const char*
int customStrcmpi(const char* str1, const char* str2) {
    while (*str1 && (tolower(*str1) == tolower(*str2))) {
        str1++;
        str2++;
    }
    return tolower(*(unsigned char*)str1) - tolower(*(unsigned char*)str2);
}

int main()
{
    char str[20], str1[20];
    cout << "Enter The String: ";
    cin >> str;
    cout << "Enter The String 1: ";
    cin >> str1;

    if (customStrcmpi(str, str1) == 0)
    {
        cout << endl << "Both Are Same";
    }
    else
    {
        cout << endl << "Both Are Not Same";
    }

    return 0;
}

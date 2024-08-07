#include <iostream>
#include <cctype>

using namespace std;

void customStrupr(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    customStrupr(str);

    cout << "The string in uppercase is: " << str << endl;

    return 0;
}

#include <iostream>

using namespace std;

void customStrcat(char *dest, const char *src)
{

    while (*dest)
    {
        dest++;
    }

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}

int main()
{
    const int BUFFER_SIZE = 200;
    char str1[BUFFER_SIZE];
    char str2[BUFFER_SIZE];

    cout << "Enter the first string: ";
    cin.getline(str1, BUFFER_SIZE);

    cout << "Enter the second string to concatenate: ";
    cin.getline(str2, BUFFER_SIZE);

    customStrcat(str1, str2);

    cout << "The concatenated string is: " << str1 << endl;

    return 0;
}

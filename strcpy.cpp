#include <iostream>

using namespace std;

void customStrcpy(char *dest, const char *src)
{
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
    const int BUFFER_SIZE = 100;
    char str1[BUFFER_SIZE];
    char str2[BUFFER_SIZE];

    cout << "Enter the source string: ";
    cin.getline(str1, BUFFER_SIZE);

    customStrcpy(str2, str1);

    cout << "The copied string is: " << str2 << endl;

    return 0;
}

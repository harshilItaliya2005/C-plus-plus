#include <iostream>

using namespace std;

int customStrlen(const char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = customStrlen(str);

    cout << "The length of the string is: " << length << endl;

    return 0;
}

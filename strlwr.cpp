#include <iostream>
#include <cctype> // For tolower() function

using namespace std;

void customStrlwr(char* str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    customStrlwr(str);

    cout << "The string in lowercase is: " << str << endl;

    return 0;
}

#include <iostream>
#include <cctype>

using namespace std;

int customStrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

int main() {
    const int BUFFER_SIZE = 100;
    char str1[BUFFER_SIZE];
    char str2[BUFFER_SIZE];

    cout << "Enter The First String: ";
    cin.getline(str1, BUFFER_SIZE);

    cout << "Enter The Second String: ";
    cin.getline(str2, BUFFER_SIZE);

    int result = customStrcmp(str1, str2);
    if (result == 0) {
        cout << "str1 and str2 are equal." << endl;
    } else if (result < 0) {
        cout << "str1 is less than str2." << endl;
    } else {
        cout << "str1 is greater than str2." << endl;
    }

    return 0;
}

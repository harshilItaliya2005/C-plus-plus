#include <iostream>

using namespace std;

void customStrrev(char* str) {
    int start = 0;
    int end = 0;

    // ==Calculate the length of the string== //
    while (str[end] != '\0') {
        end++;
    }
    end--; // ==Set end to the index of the last character== //

    // ==Swap characters from start to end== //
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    customStrrev(str);

    cout << "The reversed string is: " << str << endl;

    return 0;
}

#include <iostream>

// Class - object
/*

    // data Protection
    // Access Modifier
        1. Public
        2. private
        3. protected

    class className
    {
        AccessModifier:
        //
    };

    class -> Collection of data member and functions/Methods
    object -> blueprint of class / Instance of class
 */

using namespace std;

class Demo
{
public:
    int a = 10, b, c;

    void display()
    {
        cout << "This is display function" << endl;
    }
};

// s1,s2,s3
// min
// max
// total
// pre
// pass/fail

int main()
{

    // Single Object
    // Multi object
    // Array of Object

    // plot -> memory
    int a; // 2 byte

    Demo d;      //
    d.display(); // funcation calling

    Demo e;
    e.a = 10;

    // Demo d;  //object creation
    // d.a = 10;
    // cout << "d.a = " << d.a;
    return 0;
}
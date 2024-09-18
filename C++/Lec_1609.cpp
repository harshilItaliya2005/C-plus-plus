#include <iostream>

using namespace std;

// Polymorphism
// 1. compile time
//   -> 1. Function Overloading
//   -> 2. Operator Overloading
// 2. runtime
// Function name are same but arg is diff
// Function Overloading

class Demo
{
public:
    void Display(int a)
    {
        cout << "a = " << a << endl;
    }
    void Display(int a, int b)
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    void Display(int a, int b, int c)
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

int main()
{
    Demo d;
    d.Display(10, 20, 30);
    return 0;
}
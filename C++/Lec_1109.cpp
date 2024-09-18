#include <iostream>

using namespace std;

// class Demo
// {
// public:
//     int a;

//     void test(int xyz, int abc = 0, int pos = 9) // optional parameter , positional
//     {
//         cout << "abc = " << abc << endl;
//         cout << "xyz = " << xyz << endl;
//         cout << "pos = " << pos << endl;
//     }
// };

// void display(Demo &d)
// {
//     cout << "a = " << d.a << endl;
//     d.a = 500;
// }

// int main()
// {

//     Demo d;
//     d.test(456, 99);
//     // d.a = 100;
//     // display(d);
//     // cout << "main: a = " << d.a << endl;
//     return 0;
// }

// ++++++++++++++++++++++++++++++++++

// Constructor
// A special Method/function that was call automatically at that time object creation
// -> Class name same as function
// -> No return value , no return type

/*
    className (arg List)
    {
        // statment
    }

    1. Default Constructor
    2. Parameterize Constructor
    3. copy Constructor

    // Constructor Overloading

 */

class Demo
{
public:
    int _a = 0;
    int _b = 0;
    Demo()
    {
        cout << "This is constructor" << endl;
    }
    Demo(int a)
    {
        _a = a;
        cout << "a = " << a << endl;
    }
    Demo(int a, int b)
    {
        _a = a;
        _b = b;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    Demo(Demo &d)
    {
        _a = d._a;
        _b = d._b;
    }
    void test(Demo &e)
    {
        _a = e._a;
        _b = e._b;
    }
};

int main()
{
    Demo d(10, 20);

    Demo e(d);

    cout << "E.a = " << e._a << endl;

    return 0;
}
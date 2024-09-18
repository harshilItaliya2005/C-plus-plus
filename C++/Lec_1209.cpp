#include <iostream>

using namespace std;

// Base/parent class
// child/Derived class

class Parent
{
protected:
    int a = 10;

public:
    Parent()
    {
        cout << "This is parent class" << endl;
    }
};

class Test
{

};

class Child : public Parent , public Test
{
public:
    int b = 10;

    Child()
    {
        cout << "This is child class" << endl;
    }
    void test()
    {

        cout << "c.b = " << b << endl;
        cout << "c.a  = " << a << endl;
        int total = a + b;
        cout << "Total = " << total << endl;
    }
};

int main()
{

    Child c;
    c.test();

    return 0;
}
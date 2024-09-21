#include <iostream>

using namespace std;

class Demo
{
public:
    int a = 10;
};

class Child : public Demo
{
public:
    void display()
    {
        cout << "a = " << a << endl;
    }
};

int main()
{
    Child c;
    c.display();
    cout << "c.a = " << c.a;

    return 0;
}
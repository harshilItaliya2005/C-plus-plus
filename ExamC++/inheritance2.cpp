#include <iostream>

using namespace std;
// multilevel inheritance
class Demo
{
public:
    int a = 10;
};

class Child1 : public Demo
{
public:
    int b = 20;
    void display()
    {
        cout << "a = " << a << endl;
    }
};
class Child2 : public Child1
{
public:
};

int main()
{
    Child2 c2;
    cout << "c2.a = " << c2.a << endl;
    c2.display();
    cout << "c2.b = " << c2.b << endl;

    return 0;
}
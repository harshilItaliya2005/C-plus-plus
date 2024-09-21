#include <iostream>

using namespace std;
// multiplr inheritance
class Base
{
protected:
    int a = 10;
};
class Child1
{
protected:
    int b = 20;
};
class Child2 : public Child1, public Base
{
public:
    void display()
    {
        cout << "Base a = " << a << endl;
        cout << "Child1 b = " << b;
    }

};

int main()
{
    Child2 c;
    c.display();

    return 0;
}
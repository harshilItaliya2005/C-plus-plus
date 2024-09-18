#include <iostream>

using namespace std;
//hybrid
class Perent
{
public:
    void display()
    {
        cout << "Perent Class" << endl;
    }
};

class Child1 : public Perent
{
public:
    void displayC1()
    {
        cout << "Child1 Class" << endl;
    }
};

class Child2
{
public:
    void displayC2()
    {
        cout << "Child2 Class" << endl;
    }
};

class Child3 : public Child2, public Child1
{
public:
    void displayC3()
    {
        cout << "Child3 Class" << endl;
    }
};
int main()
{
    Child3 c3;
    c3.display();
    c3.displayC1();
    c3.displayC2();
    c3.displayC3();

    return 0;
}

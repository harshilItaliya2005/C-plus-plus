#include <iostream>

using namespace std;
// multiple
class Perent
{
public:
    void display()
    {
        cout << "This is perent class" << endl;
    }
};

class Child1
{
public:
    void displayC1()
    {
        cout << "This is child1 class" << endl;
    }
};

class Child2 : public Perent, public Child1
{
public:
    void displayC2()
    {
        cout << "This is child2 class" << endl;
    }
};

int main()
{
    Child2 c2;
    c2.display();
    c2.displayC1();
    c2.displayC2();
    return 0;
}
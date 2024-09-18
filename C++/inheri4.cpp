#include <iostream>

using namespace std;
// hierarchical
class Perent
{
public:
    void display()
    {
        cout << "This is perent class" << endl;
    }
};

class Child1 : public Perent
{
public:
    void displayC1()
    {
        cout << "This is child1 class" << endl;
    }
};

class Child2 : public Perent
{
public:
    void displayC2()
    {
        cout << "This is child2 class" << endl;
    }
};

int main()
{ 
    Child1 c1;
    cout << "Child1 Class" << endl;
    c1.display();
    c1.displayC1();
    Child2 c2;
    cout << "Child2 Class" << endl;
    c2.display();
    c2.displayC2();
    return 0;
}
#include <iostream>

using namespace std;
//multilevel
class Perent
{
public:
    void display()
    {
        cout << "This is a perent class" << endl;
    }
};
class Child1 : public Perent
{
public:
    void displayC1()
    {
        cout << "This is a child1 class" << endl;
    }
};
class Child2 : public Child1
{
public:
void displayC2()
    {
        cout << "This is a child2 class" << endl;
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
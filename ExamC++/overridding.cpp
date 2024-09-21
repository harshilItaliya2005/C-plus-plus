#include <iostream>
using namespace std;

class Parent {
public:
    void display()
    {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void display()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Child Child_Derived;
    Child_Derived.display();
    return 0;
}

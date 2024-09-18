#include <iostream>

using namespace std;

class Perent
{
protected:
    int a = 10;
    int b2 = 1000;

public:
    // Perent(int abc)
    // {
    //     cout << "abc = " << abc << endl;
    // }
    void displayP()
    {
        cout << "A = " << a << endl;
    }
};

class child2
{
protected:
    int c = 30;

public:
    void displayC2()
    {
        cout << "C = " << c << endl;
    }
};

class Child : public Perent, public child2
{
protected:
    int b = 20;

public:
    void displayC()
    {
        cout << "A = " << a << cout << "B = " << b << endl;
    }
};

int main()
{
    Child c;

    c.displayP();
    c.displayC();
    c.displayC2();
    return 0;
}
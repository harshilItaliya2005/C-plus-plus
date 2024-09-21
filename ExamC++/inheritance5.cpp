#include <iostream>

using namespace std;

class Perent
{
public:
    void d1()
    {
        cout << "Perent Class" << endl;
    }
};
class C1 : public Perent
{
public:
    void d2()
    {
        cout << "C1 Class" << endl;
    }
};
class C2
{
public:
    void d3()
    {
        cout << "C2 Class" << endl;
    }
};
class C3 : public C2, public C1
{
public:
    void d4()
    {
        cout << "C3 Class" << endl;
    }
};

int main()
{
    C3 c;
    c.d1();
    c.d2();
    c.d3();
    c.d4();

    return 0;
}

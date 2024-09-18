#include <iostream>

using namespace std;

class Perent 
{
    public:
    int a;
    void aaa()
    {
        cout << "perent id " << a << endl;
    }
};

class Child : public Perent 
{
    public:
    int b;
    void bbb()
    {
        cout << "child id " << b << endl;
    }
};
;
int main()
{
    Child c;
    c.a = 10;
    c.b = 20;
    c.aaa();
    c.bbb();


    return 0;
}
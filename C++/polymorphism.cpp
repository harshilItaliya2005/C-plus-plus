#include <iostream>

using namespace std;

class Perent
{
    public:
    int a = 10;
};

class Child : public Perent
{
    public:
    int a = 11;
};
int main()
{
    Child c = Child();
    cout << "A = " << c.a;
    return 0;
}

#include <iostream>

using namespace std;
//hierarchical inheritance 
class Base
{
protected:
    int a = 10;
    int b = 20;
};
class Child1 : public Base
{
public:
int c = 30;
    void d1()
    {
        cout << "Base With Child1 a = " << a << endl;
        cout << "Base With Child1 b = " << b << endl;
        cout << "Using Only Child1 c = " << c << endl;
    }
};
class Child2 : public Base
{
public:
int c = 30;
    void d2()
    {
        cout << "Base With Child2 a = " << a << endl;
        cout << "Base With Child2 b = " << b << endl;
        cout << "Using Only Child2 c = " << c << endl;
    }
};
int main()
{
    Child1 c1;
    c1.d1();
    Child2 c2;
    c2.d2();
  
    return 0;
}

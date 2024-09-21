#include <iostream>

using namespace std;

class Demo
{
public:
    void display(int a)
    {
        cout << "A = " << a << endl;
    }
    void display(int a, int b, int c)
    {
        cout << "Sum is = " << a + b + c << endl;
    }
    void display(int a, int b) 
    {
        cout << "Mulitiply is = " << a * b << endl;
    }
};

int main()
{
    Demo d;
    d.display(12);
    d.display(10,20,30);
    d.display(19,20);
    return 0;
}
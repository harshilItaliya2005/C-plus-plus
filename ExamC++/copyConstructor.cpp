#include <iostream>

using namespace std;

class Demo
{
public:
int b;
    Demo(int a)
    {
       b = a;
       cout << "B is = " << b << endl; 
    }
    Demo(Demo &d)
    {
        b = d.b;
        cout << "Copy constructor" << endl;
    }
};
int main()
{
    Demo d(10);
    Demo c = d;
    return 0;
}
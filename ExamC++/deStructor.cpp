#include <iostream>

using namespace std;

class Demo
{
    public:
    Demo()
    {
        cout << "Constructor" << endl;
    }
    ~Demo()
    {
        cout << "DeStructor" << endl;
    }
};
int main()
{
    Demo d;

    return 0;
}
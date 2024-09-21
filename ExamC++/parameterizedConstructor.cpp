#include <iostream>

using namespace std;

class Demo
{
    public:
    int b;
    Demo(int a)
    {
        b = a;
        cout << b;
    }
};

int main()
{
    Demo d(19);
    return 0;
}

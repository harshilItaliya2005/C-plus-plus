#include <iostream>

using namespace std;

class Demo
{
public:
int a = 100;
    operator++(int)
    {
        a++;
        cout << a << endl;
    }
};
int main()
{
    Demo d;
    cout << d.a << endl;
    d++;

    return 0;
}
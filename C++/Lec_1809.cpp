#include <iostream>

using namespace std;
class Demo
{
public:
    int a;
    Demo(int a) : a(a) {}
    operator++()
    {
        cout << "This is Operator ++ function" << endl;
        ++a;
    }
    operator++(int)
    {
        cout << "This is operator Pre ++ function" << endl;
        a++;
    }
    int operator+(Demo d)
    {
        cout << "This is + Operator" << endl;
        int total = a + d.a;
        cout << "+: Total = " << total << endl;
        return total;
    }
};
int main()
{
    Demo d(10);
    Demo e(20);
    // ++d; // pre
    // d++; // post
    // cout << "Main: d.a = " << d.a << endl;

    int total = d + e;
    cout << "Total = " << total << endl;

    return 0;
}
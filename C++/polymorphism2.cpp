#include <iostream>

using namespace std;

class Demo
{
public:
    int a;
    Demo(int a) : a(a) {}
    operator++()
    {
        cout << "This is pre ++" << endl;
        ++a;
    }

    operator++(int)
    {
        cout << "This is post ++" << endl;
        a++;
    }

    int operator+(Demo d)
    {
        cout << "This is + operator" << endl;
        int sum = a + d.a;
        cout << "Sum is :- " << sum << endl;
        return sum;
    }
};
int main()
{

    Demo d(20);
    Demo d1(60);

    ++d;
    d1++;

    cout << "main d.a = " << d.a << endl;
    cout << "main d1.a = " << d1.a << endl;
    int total = d + d1;
    cout << "Total Is :- " << total << endl;

    return 0;
}

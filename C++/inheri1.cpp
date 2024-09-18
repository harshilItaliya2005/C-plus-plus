#include <iostream>

using namespace std;
//single
class Demo
{
public:
    int a;
    int b;

    void enterValue()
    {
        cout << "A = ";
        cin >> a;
        cout << "B = ";
        cin >> b;
    }
};

class Child : public Demo
{
public:
    void sum()
    {
        cout << "Sum is " << a + b << endl;
    }
};
int main()
{
    Child c;
    c.enterValue();
    c.sum();

    return 0;
}
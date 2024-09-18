#include <iostream>

using namespace std;

class Child
{
public:
int a;
    Child()
    {
        int a = 10;
        cout << "This is Constructor" << endl;
    }
    ~Child() // tild
    {
        cout << "AAA = " << a << endl;
        cout << "This is destructor" << endl;
        cout << "Thankyou!!!" << endl;
    }
};

int main()
{

    cout << "This is pre message " << endl;

    if (1)
    {
        Child c;
        cout << "This is Post if " << endl;
    }

    //cout << "This is post message" << endl;

    return 0;
}
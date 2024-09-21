#include <iostream>

using namespace std;

class Demo
{
private:
    int a , b;
public:
    void setAB(int x, int y)
    {
        a = x;
        b = y;
    }

    void getAB()
    {
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
    }
};
int main()
{
    Demo d;
    d.setAB(10,20);
    d.getAB();

    return 0;
}
#include <iostream>

using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "This is a constructor" << endl;
    }
};
int main()
{
    Demo d;

    return 0; 
}
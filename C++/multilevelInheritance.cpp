#include <iostream> 

using namespace std;

class A 
{
    public:
    int a = 10;
    void printA()
    {
        cout << "A is Called A's Value :- " << a << endl;
    }
};

class B : public A 
{
    public:
    int b = 20;
    void printB()
    {
        cout << "B is Called B's Value :- " << b << endl;
    }
};

class C : public B 
{
    public:
    int c = 30;
    void printC()
    {
        cout << "C is Called C's Value :- " << c << endl;
    }
    void sum()
    {
        int sum = a + b + c;
        cout << "Sum :- " << sum << endl;
    }
};

int main()
{
    C obj;
    obj.printA();
    obj.printB();
    obj.printC();
    obj.sum();
    return 0;
}
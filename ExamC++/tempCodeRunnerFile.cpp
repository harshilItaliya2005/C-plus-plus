#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    operator+(Complex & obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    Complex c1(3, 2), c2(1, 7);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
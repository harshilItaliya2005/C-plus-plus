#include <iostream> 

using namespace std;

//no return no argument
void sum()
{
    int a, b;
    int sum;
    cout << "A : ";
    cin >> a;
    cout << "B : ";
    cin >> b;
    
    sum = a + b;
    cout << "Sum Is : " << sum << endl;
}

int main()
{
    sum();
    return 0;
}
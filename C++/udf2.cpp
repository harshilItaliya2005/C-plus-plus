#include <iostream> 

using namespace std;

//no return with argument

void sum(int a, int b)
{
    int sum;
    
    
    sum = a + b;
    cout << "Sum Is : " << sum << endl;
}

int main()
{
    int a , b;
    cout << "A : ";
    cin >> a;
    cout << "B : ";
    cin >> b;
    sum(a,b);
    return 0;
}
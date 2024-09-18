#include <iostream> 

using namespace std;

//with return no argument

int sum()
{
    int sum;   
    int a , b;
    cout << "A : ";
    cin >> a;
    cout << "B : ";
    cin >> b;
    sum = a + b;
    return sum;
}

int main()
{
    
    cout << "Sum Is : " << sum();
    return 0;
}



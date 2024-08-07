#include <iostream>
using namespace std;

void calculateSimpleInterest(double principal, double rate, double time);

int main()
{
    double principal, rate, time;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest: ";
    cin >> rate;

    cout << "Enter the time period (in years): ";
    cin >> time;

    calculateSimpleInterest(principal, rate, time);

    return 0;
}

void calculateSimpleInterest(double principal, double rate, double time)
{

    double simpleInterest = (principal * rate * time) / 100.0;

    cout << "Simple Interest = " << simpleInterest << endl;
}

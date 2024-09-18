#include <iostream>
using namespace std;

class Task
{
public:
    int numValues;
    char equation;
    Task()
    {
        cout << "Enter number of values (2 or 3 or 4): ";
        cin >> numValues;

        cout << "Enter the equation (+, -, *, /): ";
        cin >> equation;
    }

    void totalValue()
    {
        int a, b, total = 0;

        if (numValues >= 2 && numValues <= 4)
        {
            cout << "Enter A = ";
            cin >> a;
            cout << "Enter B = ";
            cin >> b;

            switch (equation)
            {
            case '+':
                total = a + b;
                break;
            case '-':
                total = a - b;
                break;
            case '*':
                total = a * b;
                break;
            case '/':
                total = a / b;
                break;
            default:
                cout << "Invalid equation operator.\n";
                return;
            }

            cout << "Total = " << total << endl;
        }
        else
        {
            cout << "Invalid number of values.\n";
        }
    }
};

int main()
{
    Task t;
    
    switch (t.equation)
    {
    case '+':
        t.totalValue();
        break;
    case '-':
        t.totalValue();
        break;
    case '*':
        t.totalValue();
        break;
    case '/':
        t.totalValue();
        break;

    default:
        cout << "Envaild Choice!" << endl;
        break;
    }

    return 0;
}

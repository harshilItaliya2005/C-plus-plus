#include <iostream>
#include <string>

using namespace std;

class EmployeeInfo
{
public:
    string name;
    int employeeID;

    void getInfo()
    {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee ID: ";
        cin >> employeeID;
    }

    void displayInfo()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
    }
};

class Salary
{
public:
    float basicSalary;

    void getSalary()
    {
        cout << "Enter basic salary: ";
        cin >> basicSalary;
    }

    float calculateTotalSalary(float bonus)
    {
        return basicSalary + bonus;
    }
};

class Manager : public EmployeeInfo
{
public:
    float bonus;

    void getBonus()
    {
        cout << "Enter Manager's bonus: ";
        cin >> bonus;
    }
};

class Developer : public EmployeeInfo
{
public:
    float bonus;

    void getBonus()
    {
        cout << "Enter Developer's bonus: ";
        cin >> bonus;
    }
};

class EmployeeDetails : public Manager, public Salary
{
public:
    void displayDetails()
    {
        displayInfo();
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << calculateTotalSalary(bonus) << endl;
    }
};

int main()
{
    EmployeeDetails ed;

    ed.getInfo();
    
    ed.getSalary();
    ed.getBonus();

    cout << "\n----- Employee Details -----" << endl;

    ed.displayDetails();

    return 0;
}

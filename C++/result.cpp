#include <iostream>
#include <string>

using namespace std;

struct result
{
    int rollNo;
    string name;
    int ac, ba, eco;
} s1;

void inputRollNo();
void inputName();
void subMarks();
void getResult();

int main()
{
    inputName();
    inputRollNo();
    subMarks();
    getResult();

    return 0;
}
void inputRollNo()
{
    cout << "Enter Your Roll No: ";
    cin >> s1.rollNo;
    cout << endl;
}

void inputName()
{
    cout << "Enter Your Name: ";
    getline(cin, s1.name);
    cout << endl;
}

void subMarks()
{
    cout << "Enter The AC Marks (0-100): ";
    cin >> s1.ac;
    cout << "Enter The BA Marks (0-100): "; 
    cin >> s1.ba;
    cout << "Enter The ECO Marks (0-100): ";
    cin >> s1.eco;
    cout << endl;
}

void getResult()
{
    int subTotal = s1.ac + s1.ba + s1.eco;
    float result = (subTotal / 3.0);
    cout << "Student Name: " << s1.name << endl;
    cout << "Student Roll No: " << s1.rollNo << endl;
    cout << "AC Marks: " << s1.ac << endl;
    cout << "BA Marks: " << s1.ba << endl;
    cout << "ECO Marks: " << s1.eco << endl;
    cout << "Subject Total: " << subTotal << endl;
    cout << "Result Percentage: " << result << "%" << endl;
}

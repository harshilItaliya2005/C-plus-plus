#include <iostream>

using namespace std;

class Result
{
public:
    int rollNo;
    char name[10];
    int ac, ba, eco;
    int subTotal;
    float pr;

    void studentInfo()
    {
        cout << "Enter the name: ";
        cin.getline(name, 10);

        cout << "Enter the roll no: ";
        cin >> rollNo;
        cin.ignore();
    }   

    void subMarksAndTotal()
    {
        cout << "Enter the AC marks: ";
        cin >> ac;
        cout << "Enter the BA marks: ";
        cin >> ba;
        cout << "Enter the ECO marks: ";
        cin >> eco;
        cin.ignore();
        subTotal = ac + ba + eco;
    }

    void caluResult()
    {
        pr = (subTotal / 3.0);
    }

    void minMax()
    {
        int min = ac;
        string minSubject = "AC";

        if (ba < min)
        {
            min = ba;
            minSubject = "BA";
        }
        if (eco < min)
        {
            min = eco;
            minSubject = "ECO";
        }

        int max = ac;
        string maxSubject = "AC";

        if (ba > max)
        {
            max = ba;
            maxSubject = "BA";
        }
        if (eco > max)
        {
            max = eco;
            maxSubject = "ECO";
        }

        cout << "Minimum marks: " << min << " in " << minSubject << endl;
        cout << "Maximum marks: " << max << " in " << maxSubject << endl;
    }

    void displayDetails()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "AC Marks: " << ac << endl;
        cout << "BA Marks: " << ba << endl;
        cout << "ECO Marks: " << eco << endl;
        cout << "Subject Total: " << subTotal << endl;
        cout << "Result (Percentage): " << pr << "%" << endl;
    }
};

int main()
{
    Result std[3]; // Array Of Object

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter details for student " << i + 1 << ":\n";
        std[i].studentInfo();
        std[i].subMarksAndTotal();
    }

    cout << endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Enter subject marks for student: " << std[i].name << endl;
    // }

    cout << endl;

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Minimum and Maximum marks for " << std[i].name << ":\n";
    // }

    // cout << endl;

    // for (int i = 0; i < 3; i++)
    // {
    // }

    cout << "\nStudent Results:\n";
    for (int i = 0; i < 3; i++)
    {
        std[i].caluResult();
        std[i].displayDetails();
        std[i].minMax();
        cout << endl;
    }

    // std[0].displayDetails();

    return 0;
}
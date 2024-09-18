#include <iostream>

using namespace std;

class StudentInfo 
{
public:
    string name;
    int rollNo;

    void info()
    {
        cout << "Enter the student name : ";
        cin >> name;
        cout << "Enter the student roll no : ";
        cin >> rollNo;
    }

    void displayInfo()
    {
        cout << "Student Name : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
    }
};
        
class StudentMarks : public StudentInfo
{
public:
    int ac, ba, eco;

    void marks()
    {
        cout << "Enter Ac marks : ";
        cin >> ac;
        cout << "Enter Ba marks : ";
        cin >> ba;
        cout << "Enter Eco marks : ";
        cin >> eco;
    }

    void displayMarks()
    {
        cout << "Ac : " << ac << ", Ba : " << ba << ", Eco : " << eco << endl;
    }
};

class StudentAddress : public StudentInfo
{
public:
    string address;

    void setAddress()
    {
        cout << "Enter student address : ";
        cin.ignore();  
        getline(cin, address);
    }

    void displayAddress()
    {
        cout << "Address : " << address << endl;
    }
};

int main()
{
    StudentMarks sm;
    sm.info();          
    sm.marks();        
    sm.displayInfo();   
    sm.displayMarks();  

    cout << "----------" << endl;

    StudentAddress sa;
    sa.info();      
    sa.setAddress();  
    sa.displayInfo();  
    sa.displayAddress();

    return 0;
}

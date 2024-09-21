#include <iostream>

using namespace std;

class Std
{
private:
    string name;
    int rollNo;

public:
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setRollNo(int r)
    {
        if (r > 0)
        {
            rollNo = r;
        }
        else
        {
            cout << "Invalid Roll NO!!!" << endl;
        }
    }
    int getRollNo()
    {
        return rollNo;
    }

    void display()
    {
        cout << "Name :- " << name << endl;
        cout << "Roll no :- " << rollNo << endl;
    }
};
int main()
{
    string name[2];
    int rollNo[2];
    Std s;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter the Name :- ";
        cin >> name[i];

        cout << "Enter the Roll N0 :- ";
        cin >> rollNo[i];
    }

    cout << "-----------------------------------------------------" << endl;
    for (int i = 0; i < 2; i++)
    {
        s.setName(name[i]);
        s.setRollNo(rollNo[i]);
        s.display();
    }

    return 0;
}
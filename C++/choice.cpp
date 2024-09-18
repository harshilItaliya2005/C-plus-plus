#include <iostream>

using namespace std;

class Value
{
public:
    int arraySize = 0;
    int numArray[50];

    void addValue()
    {
        int size;
        cout << "Enter the array size :- ";
        cin >> size;

        for (int i = 0; i < size; i++)
        {
            cout << i << " -> ";
            cin >> numArray[i + arraySize];
        }
        arraySize += size;    
    }

    void addAll(int p, int array[], int s)
    {
        for (int i = arraySize - 1; i >= p; i--)
        {
            numArray[i + s] = numArray[i];
        }

        for (int i = 0; i < s; i++)
        {
            numArray[p + i] = array[i];
        }

        arraySize += s;
    }

    void removeValue()
    {
        int index;
        cout << "Enter the index of the value to remove (0 to " << arraySize - 1 << "): ";
        cin >> index;

        arraySize--;
        for (int i = index; i < arraySize; i++)
        {
            numArray[i] = numArray[i + 1];
        }
    }

    void remove(int a, int b)
    {

        for (int i = a; i < a + b; i++)
        {
            numArray[i] = numArray[i + b];
        }
        arraySize -= b;
    }

    void display()
    {

        for (int i = 0; i < arraySize; i++)
        {
            cout << i << " -> " << numArray[i] << endl;
        }
    }

    void exit()
    {
        cout << "Thank You.";
    }
};

int main()
{
    int choice;
    int x, y;
    Value num;
    do
    {
        cout << "Menu : " << endl;
        cout << "1. Add values to array" << endl;
        cout << "2. Add all" << endl;
        cout << "3. Remove value from array" << endl;
        cout << "4. Remove and replace value" << endl;
        cout << "5. Display array" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            num.addValue();
            break;

        case 2:
        {
            int p, s;
            cout << "Enter the array position :- ";
            cin >> p;

            cout << "Enter the array size :- ";
            cin >> s;

            int array[s];  

            for (int i = 0; i < s; i++)
            {
                cout << i << " -> ";
                cin >> array[i];
            }
            num.addAll(p, array, s);
            break;
        }

        case 3:
            num.removeValue();
            break;

        case 4:
            cout << "Enter the starting value : ";
            cin >> x;
            cout << "Enter the length : ";
            cin >> y;
            num.remove(x, y);
            break;

        case 5:
            num.display();
            break;

        case 6:
            num.exit();
            break;

        default:
            cout << "Invalid choice. Please select from 1 to 6." << endl;
        }

        cout << endl;

    } while (choice != 6);

    return 0;
}

#include <iostream>

using namespace std;

class Find
{
public:
    int arr[5];
    Find()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "arr[" << i << "] = ";
            cin >> arr[i];
        }
        cout << endl;
    }

    void findValue()
    {
        int length = sizeof(arr) / sizeof(arr[0]);
        int min = arr[0];
        int max = arr[0];
        for (int i = 0; i < length; i++)
        {
            if (min > arr[i])
            {
                min = arr[i];
            }
            if (max < arr[i])
            {
                max = arr[i];
            }
        }
        cout << "Min Value = " << min << endl;
        cout << "Max Value = " << max << endl;

        int subt = max - min;
        int div = subt / 2;
        int value = div + min;
        int avgValue;

        for (int i = 1; ; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (value + i == arr[j] || value - i == arr[j])
                {
                    avgValue = arr[j];
                    break;
                }
            }
            if (avgValue != -1)
            {
                break;
            }
        }
        cout << "Near By Avg Value Is :- " << avgValue << endl;
    }
};
int main()
{
    Find f;
    f.findValue();

    // cout << sizeof(0);
    return 0;
}Z
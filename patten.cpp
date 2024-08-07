#include <iostream>

using namespace std;

int main()
{
    int n = 5 ;
    // cout<<"Enter The Number Of Patten : ";
    // cin>>n;

    /* for (int i = n; i >= 1; i--)
    {
        for (int k = i; k <= n; k++)
        {
            cout<<" ";

        }
        for (int j = i; j >=1; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((j == 1 || j == n) || (i == 1 || i == n))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
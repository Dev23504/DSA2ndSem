#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "\n";
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << "* "; // a loop
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  "; // b loop
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << "  "; // b loop
        }
        if (i != n)
            for (int j = 1; j <= i; j++)
            {
                cout << "* "; // a loop
            }
        else
        {
            for (int j = 1; j <= i - 1; j++)
            {
                cout << "  ";
            }
        }
    }
    cout << endl;
    return 0;
}

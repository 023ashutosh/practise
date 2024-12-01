// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int row = 9;

    for (int i = 1; i <= row; i++)
    {
        if (i < 5)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= row - i + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}
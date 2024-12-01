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
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}
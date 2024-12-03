// E
// DE
// CDE
// BCDE
// ABCDE

// 5
// 45
// 345
// 2345
// 12345

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int row = 5;

    for (int i = 0; i < row; i++)
    {
        // alphabet
        for (char character = 'E' - i; character <= 'E'; character++)
        {
            cout << character << " ";
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}
// A
// A B
// A B C
// A B C D
// A B C D E

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int row = 5;

    for (int i = 0; i < row; i++)
    {
        // alphabet
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
    // test
}
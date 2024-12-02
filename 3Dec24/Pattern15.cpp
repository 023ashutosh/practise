// A B C D E
// A B C D
// A B C
// A B
// A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int row = 5;

    for (int i = 0; i <=row; i++)
    {
        // alphabet
        for (char j = 'A'; j <= 'A' + row-1-i; j++)
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
}
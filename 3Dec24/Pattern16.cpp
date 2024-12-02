// A
// B B
// C C C
// D D D D
// E E E E E

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int row = 5;

    for (int i = 0; i < row; i++)
    {
        char alphabet = 'A' + i;
        for (int j = 0; j <= i; j++)
        {

            // alphabet
            cout << alphabet;
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}
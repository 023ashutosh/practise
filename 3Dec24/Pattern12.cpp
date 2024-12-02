// 1      1
// 12    21
// 123  321
// 12344321

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int row = 4;

    for (int i = 1; i <= 4; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // space
        for (int k = 1; k <= 2 * (row - i); k++)
        {
            cout << " ";
        }

        // number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
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
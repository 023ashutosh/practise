// 1
// 22
// 333
// 4444
// 55555

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{

    solve();
    return 0;
}

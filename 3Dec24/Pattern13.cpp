//  1
//  2  3
//  4  5  6
//  7  8  9 10
// 11 12 13 14 15

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int row = 5;
    int num = 1;

    for (int i = 1; i <= row; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << num << "  ";
            num+=1;
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
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printReverse(int n)
{
    if (n == 0)
    {
        cout << 0;
        return;
    }

    cout << n << "\t";
    printReverse(n - 1);
}

void solve()
{
    int n;
    cin >> n;

    printReverse(n);
}

int main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
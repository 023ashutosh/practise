#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printSeries(int n, int i)
{
    if (n < i)
        return;

    cout << i << "\t";
    printSeries(n, i + 1);
}

void solve()
{
    int n, i = 0;
    ;
    cin >> n;

    printSeries(n, i);
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
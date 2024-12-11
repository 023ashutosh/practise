#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printSeries(int n, int factorial)
{
    if (n == 1)
        return;

    factorial = factorial * n;
    cout << factorial << "\t";
    printSeries(n - 1, factorial);
}

void solve()
{
    int n;
    cin >> n;
    int factorial = 1;

    printSeries(n, factorial);
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
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printSeries(int n, int sum)
{
    if (n == 0)
        return;

    sum = sum + n;
    cout << sum << "\t";
    printSeries(n - 1, sum);
}

void solve()
{
    int n;
    cin >> n;
    int sum = 0;

    printSeries(n, sum);
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
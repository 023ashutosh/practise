#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long int n, count = 0;
    cin >> n;

    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    cout << count << endl;
}

int main()
{
    int t = 4;

    while (t--)
    {
        solve();
    }
    return 0;
}
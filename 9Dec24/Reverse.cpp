#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long int n, revNumber = 0;
    cin >> n;

    while (n > 0)
    {
        revNumber = (revNumber * 10) + n % 10;
        n = n / 10;
    }
    cout << revNumber << endl;
}
int main()
{
    int t = 2;
    while (t--)
    {
        solve();
    }
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, temp1, countDigits = 0, sum = 0;
    cin >> n;

    temp1 = n;

    countDigits = to_string(n).length();

    while (temp1 > 0)
    {
        sum = sum + pow(temp1 % 10, countDigits);
        cout << sum << endl;
        temp1 = temp1 / 10;
    }

    cout << sum << "\t" << temp1 << "\t" << n << endl;

    if (sum == n)
        cout << 1 << endl;
    else
        cout << 0 << endl;
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
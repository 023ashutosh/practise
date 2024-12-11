#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> divisors;

    for (int i = n; i >= 1; i--)
    {
        if (n % i == 0)
            divisors.push_back(i);
    }
    for (int j : divisors)
        cout << j << "\t";
    cout << endl;
    cout << divisors.size() << endl;
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
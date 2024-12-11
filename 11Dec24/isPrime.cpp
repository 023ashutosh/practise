#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int count = 0;
    bool isPrime = true;

    cout << sqrt(n) << endl;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count > 1)
        isPrime = false;

    cout << isPrime << endl;
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
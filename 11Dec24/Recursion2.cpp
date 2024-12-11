#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printName(string name, int n)
{
    if (n == 0)
        return;

    cout << name << endl;
    printName(name, n - 1);
}

void solve()
{
    int n;
    cin >> n;
    string name = "Ashutosh";

    printName(name, n);
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
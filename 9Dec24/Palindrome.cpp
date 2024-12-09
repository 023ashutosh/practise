#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    bool flag = true;
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str[str.length() - i - 1])
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
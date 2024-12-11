#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n1, n2;
    cin >> n1 >> n2;
    int hcf = 1;

    while (n1 > 0 || n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 - n2;
        }
        else
        {
            n2 = n2 - n1;
        }
    }
    if (n1 == 0)
        hcf = n2;

    else
        hcf = n1;

    cout << hcf;

    //     while (n1 > 0 && n2 > 0)
    //     {
    //         if (n1 > n2)
    //         {
    //             n1 = n1 - n2;
    //         }
    //         else
    //         {
    //             n2 = n2 - n1;
    //         }
    //     }

    //     if (n2 == 0)
    //     {
    //         cout << n1;
    //     }
    //     else
    //         cout << n2;
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
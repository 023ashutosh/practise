#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string test = "Test String";

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << a[i];
    }

    cout << test << endl;

    return 0;
}
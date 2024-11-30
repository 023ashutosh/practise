#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int factorial(int num)
{

    int fact;

    if (num == 1)
    {
        return 1;
    }
    return num * (factorial(num - 1));
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        cout << factorial(5) << endl;
    }

    return 0;
}

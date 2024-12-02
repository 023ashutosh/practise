// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int row = 5;
    int start;

    for (int i = 1; i <= row; i++)
    {
        if (i % 2 == 0)
        {
            start = 0;
        }
        else
        {
            start = 1;
        }
        for(int j= 1;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}

int main()
{
    solve();
    return 0;
    //test
}
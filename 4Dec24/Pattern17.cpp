//       A
//     A B A
//   A B C B A
// A B C D C B A

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int row = 4;

    for (int i = 0; i < row; i++)
    {
        // spaces
        for (int j = 0; j < row - i - 1; j++)
        {
            cout << "  ";
        }

        // alphabet
        char character = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int ch = 1; ch <= 2 * i + 1; ch++)
        {
            cout << character << " ";
            if (ch <= breakpoint)
                character++;
            else
                character--;
        }

        // spaces
        for (int j = 0; j < row - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    solve();
    return 0;
}
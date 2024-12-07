#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void clearScreen()
{
    cout << "\033[2J\033[H"; // Clear screen and move cursor to the top-left
}

void pattern1()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern4()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void pattern5()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern6()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern7()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < (2 * i) - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void pattern8()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        // star
        for (int k = 0; k <= 2 * (n - i); k++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void pattern9()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 0; j < (2 * i) - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
    for (int p = 1; p <= n; p++)
    {
        // space
        for (int q = 1; q <= p; q++)
        {
            cout << " ";
        }
        // star
        for (int r = 0; r < 2 * (n - p) - 1; r++)
        {
            cout << "*";
        }
        // space
        for (int q = 1; q <= p; q++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern10()
{
    int n = 5;
    int totalRows = 2 * n - 1;
    int stars;

    for (int i = 1; i <= totalRows; i++)
    {
        stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }

        // star
        for (int j = 1; j <= stars; j++)
        {

            cout << "*";
        }
        cout << endl;
    }
}
void pattern11()
{
    int n = 5;
    int start;
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
            start = 0;
        else
            start = 1;

        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // space 2n-2i
        for (int k = 1; k <= 2 * (n - i); k++)
        {
            cout << " ";
        }

        // reverse number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern13()
{
    int n = 5;
    int number = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}
void pattern14()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}
void pattern15()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n - i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t = 1;
    clearScreen();

    while (t--)
    {
        pattern15();
    }
    return 0;
}
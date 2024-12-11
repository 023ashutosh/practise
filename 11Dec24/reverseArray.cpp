#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;

    swap(arr[start], arr[end]);
    start++;
    end--;
    reverseArray(arr, start, end);
}

void solve()
{
    int size = 5;
    int n[size] = {1, 2, 3, 4, 5};
    reverseArray(n, 0, size - 1);
    
    for (int i = 0; i < size; ++i)
    {
        cout << n[i] << "\t";
    }
    cout << endl;
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
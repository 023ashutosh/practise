#include <iostream>
#include <bits/stdc++.h>
#include <typeinfo>

using namespace std;

int main()
{
    int t1 = 1;
    float t2 = 1.2;
    char t3 = 'A';
    string t4 = "This is a string";

    cout << typeid(t1).name() << t1 << sizeof(t1) << endl;
    cout << typeid(t2).name() << t2 << sizeof(t2) << endl;
    cout << typeid(t3).name() << t3 << sizeof(t3) << endl;
    cout << typeid(t4).name() << t4 << sizeof(t4) << endl;

    return 0;
}


//int 4 byte
//char 1 byte
//float 4 byte
//boolean 2 byte

//double 8 byte

// TYPE Modifiers
// SIGNED | UNSIGNED | LONG | SHORT

// 1) Declaration
// 2) Initialisation
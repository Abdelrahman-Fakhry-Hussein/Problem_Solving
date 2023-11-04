// A. Even Odds.cpp : This file contains the 'main' function. Program execution begins and ends there.
// http://codeforces.com/contest/318/problem/A

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int num = 0, ind = 0;
    cin >> num >> ind;

    if ((num + 1) / 2 >= ind)
    {

        cout << 2 * ind - 1 << endl;
    }
    else
    {

        cout << (ind - (num + 1) / 2) * 2 << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

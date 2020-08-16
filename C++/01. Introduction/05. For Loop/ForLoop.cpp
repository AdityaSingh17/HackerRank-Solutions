// For Loop
// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    char numtostr[][10] = {" ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a;
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
            cout << numtostr[i] << "\n";
        else if (i > 9 && i % 2 == 0)
            cout << "even\n";
        else
            cout << "odd\n";
    }
    return 0;
}
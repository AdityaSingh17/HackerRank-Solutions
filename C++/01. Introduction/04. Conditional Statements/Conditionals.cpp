// Conditional Statements
// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // Write Your Code Here

    if (n == 1) cout<<"one";
    else if (n == 2) cout<<"two";
    else if (n == 3) cout<<"three";
    else if (n == 4) cout<<"four";
    else if (n == 5) cout<<"five";
    else if (n == 6) cout<<"six";
    else if (n == 7) cout<<"seven";
    else if (n == 8) cout<<"eight";
    else if (n == 9) cout<<"nine";
    else cout<<"Greater than 9";

    return 0;
}

/* Alternate Solution (Kindly does not fullfil the idea of if-else block)
    int main()
    {
        int in;
        string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        cin >> in;

        if(in > 9)
            cout << num[0];
        else
            cout << num[in];

        return 0;
    }
 */
// Two Strings
// Problem Link: https://www.hackerrank.com/challenges/two-strings/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2)
{
    int arr[26] = {0};
    char ch;
    int index;
    for (int i = 0; i < (int)s1.size(); i++)
    {
        ch = s1[i]; // Convert str to char, then covert to int.
        index = ch - 'a';
        arr[index] = 1;
    }
    for (int i = 0; i < (int)s2.size(); i++)
    {
        ch = s2[i]; // Convert str to char, then covert to int.
        index = ch - 'a';
        if (arr[index] == 1)
            return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
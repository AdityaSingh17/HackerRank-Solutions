// Strings: Making Anagrams
// Problem Link: https://www.hackerrank.com/challenges/ctci-making-anagrams/problem

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b)
{
    int arr[26] = {0};
    for (auto i : a)
    {
        arr[i - 'a'] += 1;
    }
    for (auto i : b)
    {
        arr[i - 'a'] -= 1;
    }
    int count = 0;
    for (int i = 0; i < 26; i++)
        count += abs(arr[i]);

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
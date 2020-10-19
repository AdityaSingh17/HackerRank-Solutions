// Repeated String
// Problem Link: https://www.hackerrank.com/challenges/repeated-string/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{
    long count = 0, p;
    int i, k = s.size();
    p = n / k;

    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
            count++;
    }

    count = count * p;

    for (i = 0; i < (n % s.size()); i++)
    {
        if (s[i] == 'a')
            count++;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
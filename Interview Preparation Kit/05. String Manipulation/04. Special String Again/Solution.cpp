// Special String Again
// Problem Link: https://www.hackerrank.com/challenges/special-palindrome-again/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the substrCount function below.
long substrCount(int n, string s)
{
    string cs;
    long ep_count;
    char curr_char;
    const char *s_chars;
    vector<int> ocurr(n);

    curr_char = '\0';
    s_chars = s.c_str();
    int str_index = -1;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || s_chars[i] != curr_char)
        {
            str_index++;
            curr_char = s_chars[i];
            cs.append(1, curr_char);
        }
        ocurr[str_index]++;
    }

    for (int i = 0; i < cs.size(); i++)
    {
        ep_count += (ocurr[i] * (ocurr[i] + 1)) / 2;
    }

    for (int i = 1; i < cs.size() - 1; i++)
    {
        if (ocurr[i] == 1 && cs[i - 1] == cs[i + 1])
        {
            ep_count += min(ocurr[i - 1], ocurr[i + 1]);
        }
    }
    return ep_count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    long result = substrCount(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
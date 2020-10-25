// Alternating Characters
// Problem Link: https://www.hackerrank.com/challenges/alternating-characters/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s)
{
    int count = 0;
    for (int i = 0; i < (int)s.size();)
    {
        char ch = s[i];
        if (s[i + 1] == ch)
        {
            int j = i + 1;
            while (s[j++] == ch)
            {
                count++;
                i = j;
            }
        }
        else
            i++;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
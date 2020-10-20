// New Year Chaos
// Problem Link: https://www.hackerrank.com/challenges/new-year-chaos/problem

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumBribes function below.
void minimumBribes(vector<int> q)
{

    int ans = 0;
    for (int i = q.size() - 1; i >= 0; i--)
    {
        /*
        First check if any P is more than two ahead of its original position
        Since bribing twice is allowed.
        */
        if (q[i] - (i + 1) > 2)
        {
            cout << "Too chaotic" << endl;
            return;
        }
        /*
        Anyone who bribed P cannot get to higher than one position in front if P's          original position, so we need to look from one position in front of P's original position to one in front of P's current position, and see how many of those positions in Q contain a number large than P.*/
        for (int j = max(0, q[i] - 2); j < i; j++)
            if (q[j] > q[i])
                ans++;
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string q_temp_temp;
        getline(cin, q_temp_temp);

        vector<string> q_temp = split_string(q_temp_temp);

        vector<int> q(n);

        for (int i = 0; i < n; i++)
        {
            int q_item = stoi(q_temp[i]);

            q[i] = q_item;
        }

        minimumBribes(q);
    }

    return 0;
}

vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
// Flipping bits
// Problem Link: https://www.hackerrank.com/challenges/flipping-bits/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the flippingBits function below.
long flippingBits(long n)
{
    unsigned int ans = ~n;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        long result = flippingBits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
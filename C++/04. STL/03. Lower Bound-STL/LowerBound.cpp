// Lower Bound - STL
// Problem Link: https://www.hackerrank.com/challenges/cpp-lower-bound/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    vector<int> vec;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        vector<int>::iterator iter;
        iter = lower_bound(vec.begin(), vec.end(), temp);
        if (*(iter + 1) == temp || *iter == temp)
            cout << "Yes " << iter - vec.begin() + 1 << endl;
        else
            cout << "No " << iter - vec.begin() + 1 << endl;
    }
    return 0;
}
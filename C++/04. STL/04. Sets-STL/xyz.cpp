// Sets - STL
// Problem Link: https://www.hackerrank.com/challenges/cpp-sets/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int size, q1, q2;
    set<int> s;
    cin >> size;
    while (size--)
    {
        cin >> q1 >> q2;
        switch (q1)
        {
        case 1:
            s.insert(q2);
            break;
        case 2:
            s.erase(q2);
            break;
        case 3:
            set<int>::iterator itr = s.find(q2);
            if (itr == s.end())
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
            break;
        }
    }
    return 0;
}
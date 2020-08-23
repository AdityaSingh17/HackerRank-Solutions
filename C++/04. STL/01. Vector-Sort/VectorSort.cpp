// Vector-Sort
// Problem Link: https://www.hackerrank.com/challenges/vector-sort/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int size, num, temp;
    cin >> size;
    while (size--)
    {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    return 0;
}

/* Shorter Code
vector<int> list;
int n;
cin >> n;

while(cin >> n) list.push_back(n);
sort(list.begin(), list.end());
for(auto n : list) cout << n << " ";
*/

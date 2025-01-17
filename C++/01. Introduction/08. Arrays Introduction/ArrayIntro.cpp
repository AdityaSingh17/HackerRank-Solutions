// Arrays Introduction
// Problem Link: https://www.hackerrank.com/challenges/arrays-introduction/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = (n - 1); i >= 0; i--)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
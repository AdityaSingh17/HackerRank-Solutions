// String Stream
// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str)
{
    stringstream ss(str); // Endless string stream
    vector<int> result;
    char ch;
    int tmp;
    while (ss >> tmp)
    {                          // Checks till the string has not terminated.
        result.push_back(tmp); // Push the number to vector.
        ss >> ch;              // To remove ","
    }
    return result;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }
    return 0;
}
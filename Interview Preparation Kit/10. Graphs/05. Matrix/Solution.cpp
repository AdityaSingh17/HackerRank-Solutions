// Matrix
// Problem Link: https://www.hackerrank.com/challenges/matrix/problem

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Utility function.
int TreePrice(vector<vector<array<int, 2>>> &city_adj, vector<bool> &is_machine, vector<bool> &visited_cyties, int city, int &total_price)
{
    cout << "City: " << city;
    if (visited_cyties[city])
        return (0);
    visited_cyties[city] = true;
    cout << " First time ";
    int price = 0;
    if (is_machine[city])
    {
        price = INT_MAX;
        cout << " is_machine ";
    }
    cout << endl;
    for (int chiled = 0; chiled < (int)city_adj[city].size(); chiled++)
    {
        int c_city = city_adj[city][chiled][0];
        cout << " chiled: " << c_city << endl;
        int p = TreePrice(city_adj, is_machine, visited_cyties,
                          city_adj[city][chiled][0], total_price);
        if (p > city_adj[city][chiled][1])
            p = city_adj[city][chiled][1];

        if (p > price)
        {
            total_price += price;
            price = p;
        }
        else
            total_price += p;
    }
    return price;
}

// Complete the minTime function below.
int minTime(vector<vector<int>> roads, vector<int> machines)
{
    int total_price = 0;
    int roads_count = roads.size();
    int cities_count = roads_count * 2;
    // if (roads_count == 0 ) return 8;
    vector<vector<array<int, 2>>> city_adj(cities_count);
    vector<vector<int>> road_adj(roads_count);
    int max_city = 0;
    for (int i = 0; i < roads_count; i++)
    {
        array<int, 2> adj;
        int a = roads[i][0];
        int b = roads[i][1];
        if (a == b)
            return 8;
        if (a > max_city)
            max_city = a;
        if (b > max_city)
            max_city = b;
        if (max_city >= cities_count)
        {
            cities_count = max_city + 1;
            city_adj.resize(cities_count);
        }
        adj[0] = b;
        adj[1] = roads[i][2];

        city_adj[a].push_back(adj);

        adj[0] = a;
        adj[1] = roads[i][2];
        city_adj[b].push_back(adj);
    }
    if (max_city + 1 < cities_count)
    {
        cities_count = max_city + 1;
    }
    vector<bool> is_machine(cities_count, false);
    for (int i = 0; i < (int)machines.size(); i++)
    {
        int a = machines[i];
        if (a < cities_count) // ignore if isolated
            is_machine[a] = true;
    }

    vector<bool> visited_cyties(cities_count, false);

    for (int i = 0; i < roads_count; i++)
    {
        if (!visited_cyties[i])
            TreePrice(city_adj, is_machine, visited_cyties, i, total_price);
    }
    return total_price;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    vector<vector<int>> roads(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        roads[i].resize(3);

        for (int j = 0; j < 3; j++)
        {
            cin >> roads[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> machines(k);

    for (int i = 0; i < k; i++)
    {
        int machines_item;
        cin >> machines_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        machines[i] = machines_item;
    }

    int result = 8;
    try
    {
        result = minTime(roads, machines);
    }
    catch (const exception &er)
    {
        cout << "Other Exception" << endl;
    }
    catch (...)
    {
        cout << "Other Exception" << endl;
    }
    fout << result << "\n";
    fout.close();

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
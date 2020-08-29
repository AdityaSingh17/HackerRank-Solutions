// Attending Workshops
// Problem Link: https://www.hackerrank.com/challenges/attending-workshops/problem

#include <bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops

struct Workshop
{
    int endTime;
    int startTime;
    int duration;
};

struct Available_Workshops
{
    int n;
    Workshop *a;
};

bool operator<(Workshop &a, Workshop &b)
{
    return a.endTime < b.endTime;
}

Available_Workshops *initialize(int *start_time, int *duration, int n)
{
    Available_Workshops *ptr = new Available_Workshops;
    ptr->n = n;
    ptr->a = new Workshop[n];
    for (int i = 0; i < n; i++)
    {
        ptr->a[i].startTime = start_time[i];
        ptr->a[i].duration = duration[i];
        ptr->a[i].endTime = start_time[i] + duration[i];
    }
    return ptr;
}

int CalculateMaxWorkshops(Available_Workshops *ptr)
{
    sort(ptr->a, ptr->a + ptr->n);
    int m = 1;
    int endTime = ptr->a[0].endTime;
    for (int i = 1; i < ptr->n; i++)
    {
        if (ptr->a[i].startTime >= endTime)
        {
            m += 1;
            endTime = ptr->a[i].endTime;
        }
    }
    return m;
}

int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int *start_time = new int[n];
    int *duration = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> start_time[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> duration[i];
    }

    Available_Workshops *ptr;
    ptr = initialize(start_time, duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
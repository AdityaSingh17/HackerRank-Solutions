// Functions in C
// Problem Link: https://www.hackerrank.com/challenges/functions-in-c/problem

#include <stdio.h>
#include <stdlib.h>

int max_of_four(int a, int b, int c, int d)
{
    int r, t;
    return (t = (a > b ? a : b)) > (r = (c > d ? c : d)) ? t : r;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
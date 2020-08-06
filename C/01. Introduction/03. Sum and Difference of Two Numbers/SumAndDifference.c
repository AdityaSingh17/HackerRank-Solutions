// Sum and Difference of Two Numbers
// Problem Link: https://www.hackerrank.com/challenges/sum-numbers-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float x, y;
    scanf("%d%d", &a, &b);
    scanf("%f%f", &x, &y);
    printf("%d %d", (a + b), (a - b));
    printf("\n%0.1f %0.1f", (x + y), (x - y));
    return 0;
}
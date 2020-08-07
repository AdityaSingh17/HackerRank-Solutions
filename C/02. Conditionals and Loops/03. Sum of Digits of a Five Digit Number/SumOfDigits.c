// Sum of Digits of a Five Digit Number
// Problem Link: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, r;
    scanf("%d", &n);

    int sum = 0;
    while (n > 0)
    {
        r = n%10;
        sum += r;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}
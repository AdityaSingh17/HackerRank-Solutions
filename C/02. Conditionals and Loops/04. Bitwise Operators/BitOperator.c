// Bitwise Operators
// Problem Link: https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.
void calculate_the_maximum(int n, int k)
{
    int b, a;
    int ma = 0, mo = 0, mb = 0;
    for (a = 1; a <= n; a++)
    {
        for (b = a+1; b <= n; b++)
        {
            if ((a&b) > ma && (a&b) < k)
                ma = a&b;
            if ((a|b) > mo && (a|b) < k)
                mo = a|b;
            if ((a^b) > mb && (a^b) < k)
                mb = a^b;
        }
    }
    printf("%d\n%d\n%d", ma, mo, mb);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
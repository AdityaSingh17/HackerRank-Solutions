// Array Reversal
// Problem Link: https://www.hackerrank.com/challenges/reverse-array-c/problem

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    // Write the logic to reverse array.
    int j;
    for (j=(i-1);j>=0;j--)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}
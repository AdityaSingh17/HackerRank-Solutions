// Permutations of Strings
// Problem Link: https://www.hackerrank.com/challenges/permutations-of-strings/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
    /**
    * Complete this method
    * Return 0 when there is no next permutation and 1 otherwise
    * Modify array s to its next permutation
    */

    /*
        Algorithm :
        1) Find longest non-increasing suffix in the array.
        2) If the whole array is non-increasing sequence of strings, next permutation isn't possible.
        3) Otherwise, "key" is the string just before the suffix.
        4) Find the rightmost string in prefix, which is lexicographically larger than key.
        5) Swap key with this string.
        6) Reverse the suffix.
    */

    // Find non-increasing suffix
    int i = n-1;
    while (i>0 && strcmp(s[i-1], s[i]) >= 0)
        i--;    // find key
    if (i <= 0) return 0;

    // Swap key with its successor in suffix
    int j = n-1;
    while (strcmp(s[i-1], s[j]) >= 0)
        j--;    // find rightmost successor to key
    char *tmp = s[i-1];
    s[i-1] = s[j];
    s[j] = tmp;

    // Reverse the suffix
    j = n-1;
    while (i<j)
    {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char **s;
    int n;
    scanf("%d", &n);
    s = calloc(n, sizeof(char*));
    for (int i = 0; i < n; i++)
    {
        s[i] = calloc(11, sizeof(char));
        scanf("%s", s[i]);
    }
    do
    {
        for (int i = 0; i < n; i++)
            printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
    } while (next_permutation(n, s));
    for (int i = 0; i < n; i++)
        free(s[i]);
    free(s);
    return 0;
}
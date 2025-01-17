// Printing Tokens
// Problem Link: https://www.hackerrank.com/challenges/printing-tokens-/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    // Solution
    int i;
    for (i=0; s[i]!='\0'; i++)
    {
        if (s[i]!=' ')
            printf("%c", s[i]);
        else
        {
            printf("\n");
        }
    }

    return 0;
}
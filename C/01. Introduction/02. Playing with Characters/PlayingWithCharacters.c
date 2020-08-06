// Playing With Characters
// Problem Link: https://www.hackerrank.com/challenges/playing-with-characters/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch, sen[100], str[200];
    scanf("%c", &ch);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    scanf("\n");
    scanf("%[^\n]%*c", str);
    scanf("\n");
    printf("%c\n", ch);
    printf("%s\n", sen);
    printf("%s", str);
    return 0;
}
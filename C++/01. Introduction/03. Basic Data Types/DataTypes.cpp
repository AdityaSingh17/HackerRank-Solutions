// Basic Data Types
// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

#include <iostream>
int main()
{
    int a; long b; char c; float d; double e;
    scanf("%i %li %c %f %lf", &a, &b, &c, &d, &e);
    printf("%i\n%li\n%c\n%.03f\n%.09lf\n", a, b, c, d, e);
    return 0;
}
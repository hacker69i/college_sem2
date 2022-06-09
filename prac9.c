#include <stdio.h>
/* Function to calculate x raised to the power y */
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    return x * power(x, y / 2) * power(x, y / 2); }
/* Function to calculate order of the number */
int order(int x)
{
    int n = 0; while (x) {
        n++;
        x = x / 10; }
    return n; }


#include <stdio.h>
#include "pointer.h"
/* compile with pointer.c */
int main(void)
{
    double x = 1.434;
    double y = 5.328;
    printf("%.3f and %.3f\n", x, y);
    Larger_of(&x, &y);
    printf("x = %.3f y = %.3f", x, y);
    return 0;
}
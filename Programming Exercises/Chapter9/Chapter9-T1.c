#include <stdio.h>
#include "pointer.h"
/* compile with pointer.c */
int main(void)
{
    double x, y;
    x = 2.5;
    y = 3.87;
    printf("Min = %.3f\n", Min(&x, &y));
    return 0;
}
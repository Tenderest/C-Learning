#include <stdio.h>
#include "pointer.h"
/* compile with pointer.c */
int main(void)
{
    double x, y, z;
    x = 5.312;
    y = 1.623;
    z = 3.141;
    printf("%.3f %.3f %.3f\n", x, y, z);
    Sort(&x, &y, &z);
    printf("%.3f %.3f %.3f\n", x, y, z);
    return 0;
}
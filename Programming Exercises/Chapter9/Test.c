#include <stdio.h>
#include "pointer.h"
int main(void)
{
    // double x, y;
    // x = 2.5;
    // y = 3.87;
    // printf("Min = %.3f\n", Min(&x, &y));
    // chline('$', 2, 3);
    // printf("%.3lf and %.3lf = %.3lf\n", 3.513, 4.341, Tiaohe(3.513, 4.341));
    // double x = 1.434;
    // double y = 5.328;
    // printf("%.3f and %.3f\n", x, y);
    // Larger_of(&x, &y);
    // printf("x = %.3f y = %.3f", x, y);
    double x, y, z;
    x = 5.312;
    y = 1.623;
    z = 3.141;
    printf("%.3f %.3f %.3f\n", x, y, z);
    Sort(&x, &y, &z);
    printf("%.3f %.3f %.3f\n", x, y, z);
    return 0;
}
/* 可变宏 */
#include<stdio.h>
#include<math.h>
#define PR(X, ...) printf("Message " #X ": " __VA_ARGS__)
int main(void)
{
        double x = 48.0;
        double y;
        y = sqrt(48.0);
        PR(1, "x = %g\n", x);
        PR(2, "x = %.2f, y = %.4f\n", x, y);
        return 0;
}


#include <stdio.h>
#include "array.h"
/* compile with array.c */
void show_array(const double * ar, int num) {
    int index;
    for (index = 0; index < num; index ++, ar ++)
    {
        printf("%.1f | ", *ar);
    }
    putchar('\n');
}
int main(void)
{
    double _double_ar[4] = {1.2, 5.1, 3.5, 8.1};
    puts("_double_ar:");
    show_array(_double_ar, 4);

    putchar('\n');
    puts("Iverted:");
    InvertedOrderDouble(_double_ar, 4);
    show_array(_double_ar, 4);
    return 0;
}
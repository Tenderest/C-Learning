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
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5] = {};
    double target2[5] = {};
    double target3[5] = {};
    puts("Source:");
    show_array(source, 5);
    putchar('\n');

    puts("Before:");
    puts("target1:");
    show_array(target1, 5);
    putchar('\n');
    putchar('\n');
    puts("target2:");
    show_array(target2, 5);
    putchar('\n');
    putchar('\n');
    puts("target3:");
    show_array(target3, 5);

    puts("After:");
    putchar('\n');
    copy_arr(target1, source, 5);
    puts("target1:");
    show_array(target1, 5);

    putchar('\n');
    copy_ptr(target2, source, 5);
    puts("target2:");
    show_array(target2, 5);

    putchar('\n');
    copy_ptrs(target3, source, source + 5);
    puts("target3:");
    show_array(target3, 5);
    return 0;
}
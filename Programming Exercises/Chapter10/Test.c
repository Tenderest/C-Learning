#include <stdio.h>
#include "array.h"
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
    // double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    // double target1[5] = {};
    // double target2[5] = {};
    // double target3[5] = {};
    // puts("Source:");
    // show_array(source);
    // putchar('\n');

    // puts("Before:");
    // puts("target1:");
    // show_array(target1);
    // putchar('\n');
    // putchar('\n');
    // puts("target2:");
    // show_array(target2);
    // putchar('\n');
    // putchar('\n');
    // puts("target3:");
    // show_array(target3);

    // puts("After:");
    // putchar('\n');
    // copy_arr(target1, source, 5);
    // puts("target1:");
    // show_array(target1);

    // putchar('\n');
    // copy_ptr(target2, source, 5);
    // puts("target2:");
    // show_array(target2);

    // putchar('\n');
    // copy_ptrs(target3, source, source + 5);
    // puts("target3:");
    // show_array(target3);
    // int _int_ar[7] = {};
    // for (int index = 0; index < 7; index ++)
    // {
    //     printf("Enter _int_ar[%d] :", index);
    //     scanf("%d", &_int_ar[index]);
    // }
    // show_array(_int_ar, 7);
    // putchar('\n');
    // printf("Max = %d\n", MaxInInt(_int_ar, 7));
    putchar('\n');
    double _double_ar[4] = {1.2, 5.1, 3.5, 8.1};
    puts("_double_ar:");
    show_array(_double_ar, 4);

    putchar('\n');
    puts("Iverted:");
    InvertedOrderDouble(_double_ar, 4);
    show_array(_double_ar, 4);

    return 0;
}
#include <stdio.h>
#include "array.h"
/* compile with array.c */
void show_array(const int * ar, int num) {
    int index;
    for (index = 0; index < num; index ++, ar ++)
    {
        printf("%d | ", *ar);
    }
    putchar('\n');
}
int main(void)
{
    int _int_ar[7] = {};
    for (int index = 0; index < 7; index ++)
    {
        printf("Enter _int_ar[%d] :", index);
        scanf("%d", &_int_ar[index]);
    }
    show_array(_int_ar, 7);
    putchar('\n');
    printf("Max = %d\n", MaxInInt(_int_ar, 7));
    return 0;
}
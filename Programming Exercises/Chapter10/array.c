#include <stdio.h>
#include "array.h"

void copy_arr(double * target, double * source, int num)
{
    int index;
    for (index = 0; index < num; index ++)
    {
        target[index] = source[index];
    }
}

void copy_ptr(double * target, double * source, int num)
{
    int index;
    for (index = 0; index < num; index ++, target ++, source ++)
    {
        *target = *source;
    }
}

void copy_ptrs(double * target, double * source, double * end)
{
    while (target < end)
    {
        *target = *source;
        target ++;
        source ++;
    }
}

int MaxInInt(int * ar, int n)
{
    int max = ar[0];
    for (int index = 1; index < n; index ++)
    {
        if (max < ar[index])
        {
            max = ar[index];
        }
    }
    return max;
}

void InvertedOrderDouble(double * ar, int num)
{
    int index;
    for (index = 0; index < num / 2; index ++)
    {
        double temp;
        temp = ar[index];
        ar[index] = ar[num - index - 1];
        ar[num - index - 1] = temp;
    }
}
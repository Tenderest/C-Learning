#include <stdio.h>
#include "pointer.h"
void Swap (int * p, int * q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

double Min(double * a, double * b)
{
    double min;
    if ( *a < *b )
    {
        min = *a;
    }
    else
    {
        min = *b;
    }
    return min;
}

void chline(char ch, int j, int i)
{
    int a, b;
    for ( a = 0; a < i; a ++)
    {
        for ( b = 0; b < j; b ++)
        {
            printf("%c ", ch);
        }
        putchar('\n');
    }
}

double Turn (double a)
{
    if ( a != 0.0)
    {
        a = 1 / a;
    }
    return a;
}
double Tiaohe(double x, double y)
{
    double result;
    result = ( Turn(x) + Turn(y) ) / 2;
    result = 1 / result;
    return result;
}

void Larger_of(double * a, double * b)
{
    if ( *a > *b )
    {
        *b = *a;
    }
    else
    {
        *a = *b;
    }
}

void Sort(double * a, double * b, double * c)
{
    double min, middle, max;
    if ( *a < *b && *a < *c )
    {
        min = *a;
    }
    else
    {
        max = *a;
    }
    if ( *b < *c )
    {
        min = *b;
        middle = *c;
    }
    else
    {
        min = *c;
        middle = *b;
    }
    *a = min;
    *b = middle;
    *c = max;
}
#include<stdio.h>
int main( void )
{
        int a[3][3] = {
            { 1, 2, 3},
            { 4, 5, 6},
            { 7, 8, 9}
        };
        int index1, index2, sum = 0;
        //
        // Print
        //
        for (index1 = 0; index1 < 3; index1 ++)
        {
                for (index2 = 0; index2 < 3; index2 ++)
                {
                        printf("%d  ",a[index1][index2]);
                }
                putchar('\n');
        }
        putchar('\n');
        //
        // Sum
        //
        for (index1 = 0; index1 < 3; index1 ++)
        {
                for (index2 = index1; index2 <= index1; index2 ++)
                {
                        sum = sum + a[index1][index2];
                }
        }
        printf("Sum = %d\n",sum);
        return 0;
}

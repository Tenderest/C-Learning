/* 一个数组的地址的例子 */
/* 1.数组名即数组的首地址*/
/* 2.数组的第一个元素的地址 */
#include<stdio.h>
int main( void )
{
        int array[ 3 ];
        array[ 0 ] = 1;
        array[ 1 ] = 2;
        array[ 2 ] = 3;
        int * parray;
        parray = &array[ 0 ];
        int temp;
        temp = sizeof ( int );
        printf("sizeof ( int ) = %d\n",temp);
        int index;
        for ( index = 0; index < 3; index ++ )
        {
                printf("pointer + %d : array[ %d ] = %d  %p\n",index, index, array[ index ], parray + index );
        }
        return 0;
}
/*
        double array[ 3 ];
        array[ 0 ] = 1.0;
        array[ 1 ] = 2.0;
        array[ 2 ] = 3.0;
        double * parray;
        parray = &array[ 0 ];
        int temp;
        temp = sizeof ( double );
        printf("sizeof ( double ) = %d\n",temp);
        int index;
        for ( index = 0; index < 3; index ++ )
        {
                printf("pointer + %d : array[ %d ] = %f  %p\n",index, index, array[ index ], parray + index );
        }
*/

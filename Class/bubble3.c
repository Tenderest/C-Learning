#include<stdio.h>
int main( void )
{
    int i, j;
    int a[ 10 ];
    for ( i = 0; i < 10; i ++ )
    {
        printf("Enter:");
        scanf("%d",&a[ i ]);
    }
    for ( j = 0; j < 9; j ++ )
    {
        for ( i= 0; i < 9 -j ; i ++ )
        {
            if ( a[ i ] > a[ i + 1 ] )
            {
                int t = a[ i ];
                a[ i ] = a[ i + 1 ];
                a[ i + 1 ] = t;
            }
        }
    }
    for ( i = 0; i < 10; i ++ )
    {
        printf("a[ %d ] = %d\n", i, a[ i ]);
    }
    putchar( '\n' );
    return 0;
}

#include<stdio.h>
int main( void )
{
    int i, max, score[ 6 ];
    printf("Input 6 numbers:");
    for ( i =0; i < 6; i ++ )
            scanf("%d",&score[ i ]);
    max = score[ 0 ];
    for ( i = 1; i < 6; i ++ )
            if ( score[ i ]>max)
                    max=score[ i ];
    printf("maxmum = %d\n",max);
    return 0;
}

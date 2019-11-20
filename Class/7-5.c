#include<stdio.h>
int main( void )
{
        int i, j;
        int a[ 3 ][ 3 ];
        for ( i = 0; i < 3; i ++  )
        {
                for ( j = 0; j < 3; j ++ )
                {
                        printf("请输入矩阵的第%d行，第%d列元素：",i + 1, j + 1);
                        scanf("%d",&a[ i ][ j ]);
                }
        }
        printf("转换之前的矩阵为：\n");
        for ( i = 0; i < 3; i ++  )
        {
                for ( j = 0; j < 3; j ++ )
                {
                        printf("%8d",a[ i ][ j ]);
                }
                printf("\n");
        }
        printf("转换之后的矩阵为：\n");
        for ( j = 0; j < 3; j ++  )
        {
                for ( i = 0; i < 3; i ++ )
                {
                        printf("%8d",a[ i ][ j ]);
                }
                printf("\n");
        }
        return 0;
}

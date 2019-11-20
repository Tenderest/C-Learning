#include<stdio.h>
int main( void )
{
    int i, j, sum = 0;
    int a[ 3 ][ 3 ];
    for ( i = 0; i < 3; i ++ )
        for( j = 0; j < 3; j ++ )
        {
                printf("请输入第%d个学生的第%d门成绩：", i + 1, j + 1);
                scanf("%d",&a[ i ][ j ]);
        }
    for ( i = 0; i<3; i ++ )
    {
        for ( j = 0; j < 3; j++ )
        {
            sum = sum + a[ i ][ j ];
        }
        printf("第%d位同学的总成绩为：%d",i + 1, sum);
        sum = 0;
    }
    return 0;
}

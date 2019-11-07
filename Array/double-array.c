/* 一个二维数组的简单使用 */
#include<stdio.h>
int main( void )
{
        int tarray[ 3 ][ 3 ] = { 1,2,3,4,5,6,7,8,9 };
        /* 
            两种初始化方法，最后面需要加分号
            { 1, 2, 3 },
            { 4, 5, 6 },
            { 7, 8, 9 },

            { 1,2,3,4,5,6,7,8,9 }
        */


        /* 定义并初始化一个二维数组 */
        int index1, index2;
        /* 打印出二维数组中各个元素的值 */
        for ( index1 = 0; index1 < 3; index1 ++ )
        {
                for ( index2 = 0; index2 < 3; index2 ++ )
                {
                        printf("第[%d][%d]个元素是%2d\t", index1, index2, tarray[ index1 ][ index2 ] );
                }
                putchar( '\n' ); //打印完一行后换行
                putchar( '\n' ); //打印完一行后换行
        }
        return 0;
}

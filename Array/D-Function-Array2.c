/* 用函数计算二维数组每行每列及所有元素的和 */
#include<stdio.h>
#define ROWS 3 // rows 行数
#define COLS 4 // cols 列数
// rows 行数
// cols 列数
void sum_rows ( int ar[  ][ COLS ], int rows );
void sum_cols ( int [  ][ COLS ], int );
int sum2a ( int ( *ar )[ COLS ], int rows );
int main( void )
{
        int ar[ ROWS ][ COLS ] = {
                { 2,  4,  6, 8},
                { 3,  5,  7, 9},
                { 12,  10,  8, 6}
        };
        sum_rows( ar, ROWS );
        sum_cols( ar, ROWS );
        printf("Sum of all number = %d\n", sum2a( ar, ROWS ));
        return 0;
}

void sum_rows ( int ar[  ][ COLS ], int rows )
{
        int r, c, total;
        for ( r = 0; r < rows; r ++ )
        {
                total = 0;
                for ( c = 0; c < COLS; c ++ )
                {
                        total = total + ar[ r ][ c ];
                }
                printf("rows %d = %d\n",r, total);
        }

}

void sum_cols ( int ar[  ][ COLS ], int rows )
{
        int r, c, total;
        for ( c = 0; c < COLS; c ++ )
        {
                total = 0;
                for ( r = 0; r < rows; r ++ )
                {
                        total = total + ar[ r ][ c ];
                }
                printf("cols %d = %d\n",c, total);
        }

}

int sum2a ( int ar[ ][ COLS ], int rows )
{
        int r, c, total = 0;
        for ( r = 0; r < rows; r ++ )
        {
                for ( c = 0; c < COLS; c ++ )
                {
                        total = total + ar[ r ][ c ];
                }
        }
        return total;
}

/* VLC（变 长数组）的定义使用和函数的操作 */
#include<stdio.h>
#define ROWS 2
#define COLS 3
int sum2d ( int , int , int ar[*][*] ); // 对二维数组进行累加
// 省略了名字，定义数组省略名字时需要用'*'号代替
int main( void )
{
        int rows, cols;
        int ar[ROWS][COLS];
        printf("请输入需要处理的二维数组的各个值：\n");
        for ( rows = 0; rows < ROWS; rows ++ )
        {
                for ( cols = 0; cols < COLS; cols ++ )
                {
                        printf("ar[%d][%d] = ",rows, cols);
                        scanf("%d",&ar[rows][cols]);
                }
        }
        //
        // Printf Array
        //
        putchar('\n');
        putchar('\n');
        for ( rows = 0; rows < ROWS; rows ++ )
        {
                for ( cols = 0; cols < COLS; cols ++ )
                {
                        printf("ar[%d][%d] = %d\t",rows, cols, ar[rows][cols]);
                }
                putchar('\n');
        }
        //
        // Sum
        //
        putchar('\n');
        putchar('\n');
        printf("Add array sum = %d\n",sum2d(ROWS,COLS,ar) );
        return 0;
}

int sum2d ( int rows, int cols, int ar[rows][cols] )
{
        int r, c, total = 0;
        for ( r = 0; r < rows; r ++ )
        {
                for ( c = 0; c < cols; c ++ )
                {
                        total = total + ar[r][c];
                }
        }
        return total;
}

/* 代码块作用域 */
/* 一个内部代码块中声明的变量，其作用域只局限于该代码块 */
#include<stdio.h>
int main(void)
{
        int p = 2;
        for ( int i = 0; i < 3; i ++ )
        {
                printf("In for loop:\t");
                printf("p = %d, i = %d\n", p, i);
        }
        printf("p = %d\n", p);
        
        return 0;
}

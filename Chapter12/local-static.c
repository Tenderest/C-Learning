/* 使用一个局部的静态变量 */
/* “静态”是指变量的位置固定不动 */
/* 具有文件作用域的变量自动（也是必须的）具有静态存储时期 */
/* 也可以创建具有代码块作用域，兼具静态存储的局部变量。 */
/* 这些变量和自动变量具有相同的作用域，但当包含这些变量的函数完成工作时它们并不消失 */
/* 也就是说这些变量具有代码块作用域、空链接，却有静态存储时期 */
#include<stdio.h>
void trystat (void);
int main(void)
{
        int count;
        for ( count = 1; count <= 3; count ++ )
        {
                printf("Here comes iteration %d:\n", count);
                trystat();
        }
        return 0;
}
void trystat (void)
{
        int fade = 1;
        static int stay = 1;
        printf("fade = %d and stay = %d\n", fade ++, stay ++);
        
}

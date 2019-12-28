/* 使用assert() */
/* assert()宏的作用为： */
/* 用于标识出程序中某个条件应为真的关键位置 */
/* 并在条件为假时用assert()语句结束程序 */
/* assert()宏函数接受整数表达式为参数 */
/* 如果表达式为假，宏assert()向标准错误流stderr写一条错误信息 */
/* 并调用abort()函数以终止程序 */
#include<stdio.h>
#include<math.h>
#include<assert.h>
int main(void)
{
        double x, y, z;
        puts("Enter a pair of number ( 0 0 to quit ):");
        while ( scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0) )
        {
                z = x*x - y*y; /* should be + */
                assert(z >= 0);
                printf("answer is %f\n", sqrt(z));
                puts("Next pair of numbers:");
        }
        puts("Done");
        return 0;
}

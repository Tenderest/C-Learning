/* 使用可变个数的参数 */
/* void f1 (int n, ...);            // true */
/* int f2 (int n, ...);             // true */
/* char f3 (char c1, ..., char c2); // false */
/* double f3 ();                    // false */
/* f1(2, 200, 400);                 // 两个可变参数 */
/* f2(3, 100, 200, 300);            // 三个可变参数 */
/* double sum (int lim, ...) */
/* { */
/*         va_list ap;               // 声明用于存放参数的变量 */
/*         va_start(ap, lim);        // 把ap初始化为参数列表 */
/*         double tic; */
/*         int toc; */
/*         tic = va_arg(ap, double); // 取得第一个参数 */
/*         toc = va_arg(ap, int);    // 取得第二个参数 */
/*         va_end(ap);               // 清理工作，释放动态分配的用于存放参数的内存 */
/* } */
#include<stdio.h>
#include<stdarg.h>
double sum (int lim, ...);
int main(void)
{
        double s, t;
        s = sum(3, 1.1, 2.5, 13.3);
        t = sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);
        printf("return value for sum(3, 1.1, 2.5, 13.3):%g\n", s);
        printf("return value for sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1):%g\n", t);
        return 0;
}
double sum(int lim, ...)
{
        va_list ap;                        // 声明用于存放参数的变量
        double tot = 0;
        int i;
        va_start(ap, lim);                 // 把ap初始化为参数列表
        for ( i = 0; i < lim; i ++ )
        {
                tot += va_arg(ap, double); // 访问参数列表中的每一个项目
        }
        va_end(ap);                        // 清理工作
        return tot;
}

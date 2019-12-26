/* 使用##运算符 */
#include<stdio.h>
#define XNAME(n) x##n // 不能在中间使用空格x # # n中间不能隔开
#define PRINT_XN(n) printf("x" #n " = %d\n", x ## n);
int main(void)
{
        int XNAME(1) = 14; // 变为 int x1 = 14;
        int XNAME(2) = 20; // 变为 int x2 = 20;
        PRINT_XN(1);       // 变为 printf("x1 = %d\n", x1);
        PRINT_XN(2);       // 变为 printf("x2 = %d\n", x2);
        return 0;
}

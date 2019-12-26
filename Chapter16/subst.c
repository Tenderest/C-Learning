/* #运算符 */
/* 在字符串中进行替换 */
#include<stdio.h>
#define PSQR(x) printf("The square of " #x " is %d.\n", ( (x) * (x) ) );
int main(void)
{
        int y = 5;
        PSQR(y);
        PSQR(2 + 4);
        return 0;
}
/* 第一次调用宏时用y代替#x第二次调用宏时用2+4代替#x。 */

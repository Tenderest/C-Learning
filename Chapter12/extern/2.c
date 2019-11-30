/* 使用gcc 1.c 2.c -o extern.out来进行多文件编译 */
#include<stdio.h>
int main(void)
{
        extern int try; // 一个外部变量的引用声明
        printf("try = %d\n", try);
        return 0;
}

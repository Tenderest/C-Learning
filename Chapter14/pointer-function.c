/* 指向函数的指针 */
/* 注意函数和 指向函数的指针 的！！类型！！要一致 */
#include<stdio.h>
void pr ( int );
void (*pf1) ( int ); // 需使用同一类型的
void add ( int , int );
void (*pf2) ( int , int ); // 需使用同一类型的
/* 声明一个指向特定函数类型的指针，首先声明一个该类型的函数 */
/* 然后用(*pf)形式的表达式代替函数名称;pf就成为可以指向那种类型函数的指针了 */
/* 注意得是！！同一类型！！ */
int main(void)
{
        int a, b;
        a = 10;
        b = 5;
        pf1 = pr; // 使pf1指向函数pr
        pr(a); // 正常调用函数
        (*pf1)(a); // 使用指向函数的指针调用函数
        pf1(a); // 使用指向函数的指针调用函数

        putchar('\n');
        
        pf2 = add; // 使pf2指向函数add
        add(a, b); // 正常调用函数
        (*pf2)(a, b); // 使用指向函数的指针调用函数
        pf2(a, b); // 使用指向函数的指针调用函数
        return 0;
}
void pr ( int b )
{
        printf("a = %d\n", b);
        
}
void add ( int a, int b )
{
        printf("%d + %d = %d \n", a, b, a+b );
        
}

/* 使用结构的地址 */
/* 传递指向结构的指针 */
#include<stdio.h>
#define FUNDLEN 50
struct funds {
        char bank[FUNDLEN];
        double bankfund;
        char save[FUNDLEN];
        double savefund;
};
double sum ( const struct funds * ); // 参数是一个指针
// sum函数使用一个指向fund结构的指针
int main(void)
{
        struct funds stan = {
                "Garlic-Melon Bank",
                3024.72,
                "Lucky's Saving and Lan",
                9237.11
        };
        printf("Stan has a total of $%.2f.\n", sum( &stan ) );
        return 0;
}
double sum ( const struct funds * money)
{
        return ( money->bankfund + money->savefund );
}

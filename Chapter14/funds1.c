/* 传递结构成员 */
/* 把结构成员作为参数传递 */
#include<stdio.h>
#define FUNDLEN 50
struct funds {
        char bank[FUNDLEN];
        double bankfund;
        char save[FUNDLEN];
        double savefund;
};
double sum ( double , double ); // 参数是两个double值
int main(void)
{
        struct funds stan = {
                "Garlic-Melon Bank",
                3024.72,
                "Lucky's Saving and Lan",
                9237.11
        };
        printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund) );
        return 0;
}
double sum ( double x, double y )
{
        return( x + y );
}

/* 使用位运算显示二进制数 */
#include <stdio.h>
char * itobs ( int , char * ); // 使用位与计算出一个数的最后一位到序存放进一个数组中
void show_bstr ( const char * );
int invert_end ( int num, int bits ); // 反转一个值的最后n位， 使用^运算
int main(void)
{
    char bin_str[ 8 * sizeof(int) + 1 ];
    int number;
    puts("Enter integers and see them in binary.");
    puts("Non-numeric input terminates program.");
    while ( scanf("%d", &number) == 1 )
    {
        itobs( number, bin_str );
        printf("%d is \n", number);
        show_bstr(bin_str);
        putchar('\n');
        number = invert_end(number, 4);
        printf("Inverting the last 4 bits gives\n");
        show_bstr(itobs(number, bin_str));
        putchar('\n');
    }
    puts("Bye");
    return 0;
}

char * itobs ( int n, char * ps )
{
    int i;
    static int size = 8 * sizeof(int);
    for ( i = size - 1; i >= 0; i --, n >>= 1 )
    {
        ps[i] = ( 01 & n ) + '0';
    }
    ps[size] = '\0';
    return ps;
}
void show_bstr ( const char * str )
{
    int i = 0;
    while ( str[i] ) // 不是空字符
    {
        putchar(str[i]);
        if (++ i % 4 == 0 && str[i] )
        {
            putchar(' ');
        }
    }
}
int invert_end ( int num, int bits ) // 反转一个值的最后n位， 使用^运算
{
    int mask = 0;
    int bitval = 1;
    while ( bits -- > 0 ) // 创建一个掩码
    {
        mask = mask | bitval; // mask |= bitval;
        bitval <<= 1; // 移动到下一位
    }
    // mask 1111
    printf("\nmask = %d\n", mask);
    return num ^ mask;
}
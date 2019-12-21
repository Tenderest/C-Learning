/* 使用移位运算符来求一个十进制数的二进制 */
/* 需要循环输入 */
/* 需要用到移位运算符： >> */
/* 需哟存放进一个字符数组中，到序存放 */
#include <stdio.h>
void show_str ( const char * );
char * yi_wei ( int , char * );
int main( void )
{
    int num;
    char str[8+1]; // 一个二进制数按8bit来存储，字符数组尾部结束符
    puts("十进制数->二进制数（使用移位运算）");
    printf("输入一个十进制数：");
    while ( scanf("%d", &num) == 1 )
    {
        yi_wei( num, str );
        printf("%d is ", num);
        show_str( str );
        putchar('\n');
        printf("输入一个十进制数：");
    }
    return 0;
}
char * yi_wei ( int b, char * mstr )
{
    for ( int i = 7; i >= 0; i --, b >>= 1)
    {
        mstr[i] = ( 01 & b ) + '0';
    }
    mstr[8] = '\0';
    return mstr;
}
void show_str ( const char * mstr )
{
    int i = 0;
    while ( mstr[i] ) // 当mstr不是i一个空字符
    {
        putchar(mstr[i]);
        if ( i % 4 == 3 && mstr[i] ) // 每4位输出
        {
            putchar(' ');
        }
        i ++;
    }
}
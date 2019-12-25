/*     
第十五章编程题第1题
Page 444 T1
编写一个人将二进制字符串转化为数字值的函数
char * pbin = "01001001"
将pbin作为一个参数传递给该函数，使该函数返回一个int值25
注意：0往左移动任意位还是0，即可在循环开始时移动位
*/
#include<stdio.h>
int str_int ( char * );
int main(void)
{
        char * pbin = "11001";
        int pint;
        pint = str_int( pbin );
        printf("%s -> int = %d\n", pbin, pint);
        return 0;
}
int str_int ( char * str )
{
        /* 二进制有8位，字符串长度str[9] */
        int pint = 0;
        printf("1. pint = %d\n", pint);
        for ( int i = 0; str[i]; i ++ )
        {
                pint <<= 1;
                if ( str[i] == '0' )
                {
                        printf("str[%d] = %c\n", i, str[i]);
                        pint = pint | (str[i] - '0');
                        printf("pint = %d\n", pint);
                }
                else if ( str[i] == '1' )
                {
                        printf("str[%d] = %c\n", i, str[i]);
                        pint = pint | (str[i] - '0');
                        printf("pint = %d\n", pint);
                }
        }
        return pint;
}

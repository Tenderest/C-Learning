#include<stdio.h>
int main( int agrc, char * argv[] )
{
        int count;
        printf("这个程序输入有%d个参数\n", agrc - 1);
        for ( count = 1; count < agrc; count ++ )
        {
                printf("%d: %s\n", count, argv[count]);
        }
        putchar('\n');
        printf("agrc的值是：%d\n", agrc);
        printf("argv这个数组全部元素是：\n");
        for ( count = 0; count < agrc; count ++ )
        {
                puts(argv[count]);
        }
        
        return 0;
}

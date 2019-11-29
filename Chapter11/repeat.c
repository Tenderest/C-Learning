/* 带有参数的main()函数 */
#include<stdio.h>
int main( int argc, char *argv[])
{
        int count;
        printf("The command line has %d arguments:\n", argc);
        for ( count = 0; count < argc; count ++ )
        {
                printf("%d: %s\n", count, argv[count]);
        }
        putchar('\n');
        return 0;
}

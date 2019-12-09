/* 以二进制模式读取 */
#include<stdio.h>
int main(void)
{
        char fname[] = "test.dat";
        int read[5];
        FILE * fp;
        fp = fopen(fname, "rb"); // 二进制读取
        fread(read, sizeof(int), 5, fp); // 二进制读取放在一个数组里面
        for ( int index = 0; index < 5; index ++ )
        {
                printf("%d  ", read[index]);
        }
        putchar('\n');
        return 0;
}

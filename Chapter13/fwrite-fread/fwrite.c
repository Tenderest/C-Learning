/* 以二进制模式写入 */
/* 只能以二进制模式读取 */
/* 用文本模式无法显示和读取 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
        char fname[] = "test.dat";
        int buffer[5] = {1, 2, 3, 4, 5};
        FILE * fp;
        fp = fopen(fname, "ab"); // 二进制读取
        fwrite(buffer, sizeof(int), 5, fp); // 二进制写入，从一个数组里面
        fclose(fp);
        return 0;
}

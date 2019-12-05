/* 打开一个文件并打印内容 */
/* 2个范例 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
        int ch;
        FILE * fp;
        fp = fopen("test.txt", "r");
        if ( fp == NULL )
        {
                printf("打开文件失败！");
                exit(1);
        }
        ch = getc(fp);
        while ( ch != EOF )
        {
                putchar(ch);
                ch = getc(fp);
        }
        return 0;
}
        /* 设计范例1 */
        /* int ch; // int 来控制EOF */
        /* FILE * fp; */
        /* fp = fopen("wacky.txt", "r"); */
        /* ch = getc(fp); // 获取初始输入 */
        /* while ( ch ! = EOF ) */
        /* { */
        /*         putchar(ch); // 处理输入 */
        /*         ch = getc(fp); // 获取下一个输入 */
        /* } */

        /* 设计范例2 */
        /* int ch; // int 来控制EOF */
        /* FILE * fp; */
        /* fp = fopen("wacky.txt", "r"); */
        /* ch = getc(fp); // 获取初始输入 */
        /* while ( ( ch = getc(fp) ) ! = EOF ) */
        /* { */
        /*         putchar(ch); // 处理输入 */
        /* } */

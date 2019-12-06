/* 反序输出一个文件 */
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
        char ch;
        char file[50];
        FILE * fp;
        long count, last;
        printf("请输入需要操作的文件名：");
        gets(file);
        printf("接下来开始输出%s文件\n", file);
        fp = fopen(file, "rb");
        if ( fp == NULL )
        {
                printf("打开文件出错，请检查文件名%s是否正确！\n", file);
                exit(1);
        }
        fseek(fp, 0L, SEEK_END); // 定位到文件结尾处
        last = ftell(fp);
        
        for ( count = 1L; count <= last; count ++ )
        {
                fseek(fp, -count, SEEK_END);
                ch = getc(fp);
                putc(ch, stdout);
        }
        
        return 0;
}

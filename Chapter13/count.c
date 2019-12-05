/* 使用命令行参数输入 */
/* 打开一个文件并打印出内容和计数 */
#include<stdio.h>
#include<string.h>
int main( int agrc, char * argv[] )
{
        long int count = 0;
        int ch; // 读取时存储每个字符的位置
        FILE * fp; // 文件指针
        if ( agrc != 2 )
        {
                printf("使用了%s做为文件名，错误。\n", argv[0]);
                exit(1);
        }
        if ( (fp = fopen(argv[1], "r")) == NULL )
        {
                printf("不能打开%s\n", argv[1]);
                exit(2);
        }
        while ( ( ch = getc(fp) ) != EOF )
        {
                putc(ch, stdout);
                count ++;
        }
        /* for ( int index = 0; index < 5; index ++ ) */
        /* { */
        /*         putc('A', fp); */
        /* } */
        
        fclose(fp);
        printf("%s有%d个字符\n", argv[1], count);
        return 0;
}

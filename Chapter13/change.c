/* 打开两个文件，一个读取，一个输出 */
/* 通过命令行参数获取 */
#include<stdio.h>
#include<string.h>
int main( int argc, char * argv[] )
{
        int ch; // 存放每个字符
        FILE * in, * out; // 文件指针
        char name[20];
        char strings[99];
        char * search;
        strcpy(name, argv[1]); // 存放文件名数组
        /* puts(name); */
        if ( argc != 2 )
        {
                printf("使用的参数太少\n");
                
        }
        // 打开用来读取的文件
        /* if ( (in = fopen(argv[1], "r") ) == NULL ) */
        /* { */
        /*         printf("打开%s文件失败\n", argv[1]); */
                
        /* } */
        //
        // 输出读取文件的内容
        //
        /* while ( ( ch = getc(in) ) != EOF ) */
        /* { */
        /*         putc(ch, stdout); */
        /* } */

        printf("输入需要追加的字符串：");
        fgets(strings, 99, stdin); // 获取字符串
        search = strchr(name, '.'); // 找到'.'这个字符的地址
        *search = '\0'; // 把这个地址的值改为'\0'，即字符串结尾
        strcat(name, ".red"); // 连接字符串，即更改文件名字
        // 打开用来写入的文件
        /* puts(name); */
        if ( ( out = fopen(name, "r") ) == NULL )
        {
                printf("打开/创建%s文件失败\n", name);
                
        }
        /* while ( ( ch = getc(in) ) != EOF ) */
        /* { */
        /*         putc(ch,out); */
        /* } */
        fputs(strings, out);
        
        /* if ( ( fclose(in) && fclose(out) ) != 0 ) // 正常关闭返回0 */
        /* { */
        /*         printf("关闭文件失败\n"); */
        /* } */
        /* fclose(in); */
        fclose(out);
        return 0;
}

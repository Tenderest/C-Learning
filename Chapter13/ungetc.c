/* 将指定字符放回输入流中 */
/* 如果向输入流中放入了一个字符，下次调用标准输入函数就会读入那个字符 */
/* 如果一个C实现允许将一行里的多个字符放回输入流，那么输入函数就会以放回时相反的顺序读入 */
/* 即反序输出 */
/* int ungetc( int c, FILE * fp) 文件指针这里用的stdin和stdout*/
#include<stdio.h>
#include<string.h>
void fun(void);
int main(void)
{
    char ch;
    char str[20];
    printf("输入一个字符串（小于20个字符）\n");
    gets(str); // 用来读入字符串，丢弃\n  fgets不丢弃
    // fputs(str,stdout);
    for (int i = 0; i < strlen(str); i++)
    {
        ch = str[i];
        // putc(ch,stdout);
        ungetc(ch,stdin); // 把字符放回输入流
        // 例：输入：Hello
        // 从H开始放回
        // 输入流中的顺序是olleH
    }
    for (int i = 0; i < strlen(str); i++)
    {
        ch = getc(stdin); // 从输入流中获取输入
        putc(ch,stdout); // 输出字符
    }
    putc('\n',stdout); // 去掉最后那个%
    return 0;
}

/* 结构数组的示例 */
#include<stdio.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10 // 最多可容纳的图书册数
struct book {
    // 建立book模板
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int main(void)
{
    struct book library[MAXBKS]; // book结构数组
    int count = 0;
    int index;
    printf("Please enter the book title.\n");
    printf("Please [enter] at the start of a line to stop.\n");
    while ( count < MAXBKS && gets( library[count].title ) != NULL && library[count].title[0] != '\0' )
    {
        printf("Now enter the author.\n");
        gets( library[count].author );
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value); // scanf丢弃\n留在输入流中等待下次读取
        while ( getchar() != '\n' ) // 剔除\n防止程序读取一次后异常退出
        {
            continue;
        }
        if ( count < MAXBKS )
        printf("Enter the next title.\n");
    }
    if ( count > 0 )
    {
        printf("Here is the list of your books:\n");
        for ( index = 0; index < count; index ++ )
        {
            printf("%s by %s : $%.2f\n", library[index].title, library[index].author, library[index].value);
        }
    }
    else
    {
        printf("No books? Too bad.\n");
    }
    return 0;
}
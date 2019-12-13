/* 一个结构保存的实例 */
/* 把结构的内容保存到文件中 */
#include<stdio.h>
#include<stdlib.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int main(void)
{
    struct book library[MAXBKS]; // 一个结构数组
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof( struct book );
    if ( ( pbooks = fopen("book.dat", "a+b") ) == NULL )
    {
        fputs("Can't open book.dat file\n", stderr );
        exit(1);
    }
    rewind(pbooks); // 定位到文件开始处
    while ( count < MAXBKS && fread( &library[count], size, 1, pbooks ) == 1 ) // fread以二进制读入一个数据，大小是一个结构，次数是1次
    //fread返回成功读入的项目数，正常则与设定的相等，不然错误则返回的会小于设定的值
    {
        if ( count == 0 )
        {
            puts("Current contents of book.dat: ");
        }
        printf("%s by %s : $%.2f\n", library[count].title, library[count].author, library[count].value );
        count ++;
    }
    filecount = count;
    if ( count == MAXBKS )
    {
        fputs("The book.dat file if full.", stderr );
        exit(2);
    }
    puts("Please add new book titles.");
    puts("Press [enter] at the start of a line to stop.");
    while ( count < MAXBKS && gets(library[count].title) != NULL && library[count].title != '\0' )
    {
        puts("Now enter the author.");
        gets(library[count].author);
        puts("Now enter the value.");
        scanf("%f", &library[count ++].value);
        while ( getchar() != '\n' )
        {
            continue; // 用来清空输入行，清空缓存区，清空输入
        }
        if ( count < MAXBKS )
        {
            puts("Enter the next title.");
        }
    }
    if ( count > 0 )
    {
        puts("Here is the list of your books: ");
        for ( index = 0; index < count; index ++ )
        {
            printf("%s by %s $%.2f\n", library[index].title, library[index].author, library[index].value );
        }
        fwrite( &library[filecount], size, count - filecount, pbooks );
    }
    else
    {
        puts("No books? Too bad.\n");
    }
    puts("Bye.\n");
    fclose(pbooks);
    return 0;
}
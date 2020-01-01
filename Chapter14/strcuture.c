#include<stdio.h>
int main(void)
{
    struct book
    {
        char title[41];
        char author[31];
        float a;
    };
    struct book library = {
        .title = "Li yunfeng",
        .a = 23.1,
        .author = "No"
    };
    struct book another = {
        
    };
/*     struct book another.title = "";
    struct book another.author = "Yes";
    struct book another.a = 2.1; */
/*     printf("输入title：");
    gets(another.title);
    printf("输入author：");
    gets(another.author);
    printf("输入数值：");
    scanf("%f", &another.a); */
    printf("title:%s\nauthor:%s\na = %f\n", library.title, library.author, library.a);
    printf("title:%s\nauthor:%s\na = %f\n", another.title, another.author, another.a);
    return 0;
}

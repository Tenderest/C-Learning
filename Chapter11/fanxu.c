/* 反序输出一个字符串 */
#include<stdio.h>
#include<string.h>
int main(void)
{
        char food[] = "Milkshake noodle";
        char * pstr;
        pstr = food + strlen(food); // pstr等于'\0'的地址
        printf("Before:");
        puts(food);
        /* putchar('\n'); */
        printf("After::");
        while ( --pstr >= food )
        {
                putchar(*pstr);
        }
        putchar('\n');
        return 0;
}
